tell application "Finder"
	tell disk "Growl"
		open
		tell container window
			set current view to icon view
			set toolbar visible to false
			set statusbar visible to false
			--set the bounds to {30, 50, 579, 600}
		end tell
		close
		set opts to the icon view options of container window
		tell opts
			set icon size to 64
			set arrangement to not arranged
		end tell
		set background picture of opts to file ".background:growlDMGBackground.png"
		set position of item "Growl.prefPane" to {147, 75}
		set position of item "Extras" to {100, 320}
		--set position of item "Scripts" to {36, 153}
		set position of item "Growl Documentation.webloc" to {100, 218}
		set position of item "Growl version history.webloc" to {275, 218}
		set position of item "Get more styles.webloc" to {415, 218}
		set position of item "Uninstall Growl.app" to {415, 320}
		update without registering applications
		tell container window
			open
			set the_window_id to id
		end tell
		update without registering applications
	end tell
	set bounds of window id the_window_id to {30, 50, 479, 1500}
	--give the finder some time to write the .DS_Store file
	delay 5
end tell