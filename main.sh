#! /bin/bash

DIRS=()
function lsdir() {
	DIRS=()
	for OBJ in *; do
		# echo "$OBJ"
		if [ -d "$OBJ" ]; then
			DIRS=("${DIRS[@]}" "$OBJ")
		fi
	done
}

function main() {
	lsdir
	# echo "${DIRS[@]}"
	for DIR in "${DIRS[@]}"; do
		for SUBDIR in "$DIR/"*; do
			# for HEADER in "$SUBDIR/include/"*.h; do
			# 	SRC="$(sed 's/\.h$/.cpp/g' <<< "$(basename "$HEADER")")"
			# 	rm -f "$SUBDIR/src/"*.h
			# 	cp -vf "$HEADER" "$SUBDIR/src/$SRC"
			# done
			MKFILE="$SUBDIR/Makefile"
			if [ ! -f "$MKFILE" ]; then
				# echo "$SUBDIR"
				cp -av "./Behavioral/Chain of Responsibility/Makefile" -t "$SUBDIR"
			fi
		done
	done

}

main "$@"
