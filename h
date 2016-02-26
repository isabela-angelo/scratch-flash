[33mcommit 629091f30f854e6db777c92556ccc6ef952e93b8[m
Author: isabela.angelo <isabela.angelo@gmail.com>
Date:   Fri Feb 26 16:25:26 2016 -0300

    teste com a camera

[33mcommit 9d19dc779aca179be6c0a3f15bceae48589aa0e6[m
Author: Benjamin Berg <ben.berg781@gmail.com>
Date:   Fri Feb 12 13:34:25 2016 -0500

        Adding before_install step to fetch OSMF.zip manually

[33mcommit 81bc0e52eb8223fbf6ed37f42c70bec2be69a85c[m
Author: Benjamin Berg <ben.berg781@gmail.com>
Date:   Fri Feb 12 10:21:11 2016 -0500

        Adding osmf to gradle cache

[33mcommit bfad20ae5ff794fab4c751eda3d050187d4c3810[m
Merge: becc496 8e31bf1
Author: bsb20 <benberg@media.mit.edu>
Date:   Thu Feb 11 11:52:30 2016 -0500

    Merge pull request #1003 from bsb20/issues/1002
    
    Magic wand didn't handle transitions well

[33mcommit 8e31bf1b7c131c70dd3281d8dc38f821b7e8c5e6[m
Author: Benjamin Berg <ben.berg781@gmail.com>
Date:   Wed Feb 10 16:42:13 2016 -0500

        Added "flip" handling when in magic wand
    
        -Creates a new segmentation state and flips it
        -Also, handled associated magic wand undo/redo bug

[33mcommit 7ff76464395215d36f12d4819a3f08f3cf94648b[m
Author: Benjamin Berg <ben.berg781@gmail.com>
Date:   Wed Feb 10 11:34:39 2016 -0500

        Added magic wand refresh method
    
        -Must refresh when costume is updated while in magic wand tool

[33mcommit 1f1ff3f64ccc2bf3d8259a979a68861f4b2f4c4b[m
Author: Benjamin Berg <ben.berg781@gmail.com>
Date:   Mon Feb 8 10:33:02 2016 -0500

        Magic wand didn't handle transitions well
    
        -When leaving bitmapSelect, the work area was not update until after
        creating of the new tool
        -Magic wand would then use an old copy of the work area
        -Added line to update this copy of the work area when this
        transition occurs

[33mcommit becc496d0d16f967faceb1fa876b76baf4fb6cca[m
Merge: aad2034 6d464aa
Author: bsb20 <benberg@media.mit.edu>
Date:   Wed Feb 10 16:51:06 2016 -0500

    Merge pull request #1005 from bsb20/issues/918
    
    Prevents Select tool from erasing redo stack

[33mcommit aad2034506503ecc5073aa8d66c5de3667951ab9[m
Merge: ce3fe32 62566af
Author: bsb20 <benberg@media.mit.edu>
Date:   Wed Feb 10 14:32:59 2016 -0500

    Merge pull request #1004 from bsb20/issues/944
    
    Added error handling for sound uploading

[33mcommit 6d464aaa3fc1cfa5d7c35d703043a1f403ff83ff[m
Author: Benjamin Berg <ben.berg781@gmail.com>
Date:   Wed Feb 10 10:14:07 2016 -0500

        Refactored is/as ObjectTrasnformer checks
    
        -Created a read-only property which performs this cast on
        currentTool
        -Only replaced places where is/as checks were done explicitly
        -This means checks like `toolMode == "select"` were left in place.
        This is precautionary, and would probably be safe to changes
        eventually.

[33mcommit ce3fe32c84c24ffdae0c44acb4c82d1e97351518[m
Merge: 43d2f46 c360c0b
Author: bsb20 <benberg@media.mit.edu>
Date:   Wed Feb 10 09:50:36 2016 -0500

    Merge pull request #1006 from bsb20/issues/526
    
    Fixed SVG grow/shrink problem

[33mcommit 62566afc1161026867f0fb4e3eaa14446ccaba2d[m
Author: Benjamin Berg <ben.berg781@gmail.com>
Date:   Wed Feb 10 09:48:59 2016 -0500

        Refactored sound uploading error handling
    
        -Placed new error handling in separate callback

[33mcommit c360c0bafab31553bc0de80d02ab293665b41876[m
Author: Benjamin Berg <ben.berg781@gmail.com>
Date:   Tue Feb 9 14:00:33 2016 -0500

        Fixed SVG grow/shrink problem
    
        -The listener in question was added with useCapture=true
        -When an SVG element is ungrouped, it will be the target of the
        MOUSE_DOWN event
        -Now, check if the element I'm clicking on would make a non-group
        Selection.  If so, add a listener with useCapture=false

[33mcommit e4296b5b603a63b9a8b9b8e4aeeca43d6c678b5b[m
Author: Benjamin Berg <ben.berg781@gmail.com>
Date:   Mon Feb 8 14:49:56 2016 -0500

        Prevents Select tool from erasing redo stack
    
        -Tracks Select tool state to wait until an actual change is made
        -Only allows a Select operation to trigger a save when a change is
        made

[33mcommit d8e0971d592a42597b4c05581b976a6b4f2d4f29[m
Author: Benjamin Berg <ben.berg781@gmail.com>
Date:   Mon Feb 8 13:44:41 2016 -0500

        Added error handling for sound uploading
    
        -Rather than upload an empty sample, show an error msg

[33mcommit 43d2f462af5518c96e22373a924c99da808913d5[m
Merge: 2900024 e58a267
Author: bsb20 <benberg@media.mit.edu>
Date:   Fri Jan 29 15:44:44 2016 -0500

    Merge pull request #996 from bsb20/issues/256
    
    Two bug fixes for segmentation tool

[33mcommit e58a2675917814a7cb9550bd5fb47080340f586e[m
Author: Benjamin Berg <Mallory@benjamins-mbp-3.media.mit.edu>
Date:   Fri Jan 29 14:49:59 2016 -0500

        Made SegmentationState bounds are positive
    
        -xMin and yMin could have become negative
        -in lastPoint, they are now ensured to be at least 0

[33mcommit 29000242369c744e9657a34e8246bded481ac552[m
Author: Christopher Willis-Ford <cwillisf@media.mit.edu>
Date:   Fri Jan 29 11:28:45 2016 -0800

    Generate commit IDs using `git rev-parse`
    
    Previously we used `git describe` for commit IDs, which encouraged
    tagging releases before we were sure which commit was going to be used
    for the release. Now the commit ID in the "version details" menu will
    always show a short hash.

[33mcommit 7b6ef461b82945a94581212c44fe8eb693a8630d[m
Author: Benjamin Berg <Mallory@benjamins-mbp-3.media.mit.edu>
Date:   Fri Jan 29 14:17:01 2016 -0500

        Simplified cropRect
    
        -Made a minimum width for drawRect by changing lastPoint
        -Switched to using rect.intersection
        -Added safety by prevening calls when cropRect dimensions are zero
        -Fixed bug when drawing entirely outside color rect

[33mcommit 57dd4e08fb8483e6c54d6e2d628e1c1e67489049[m
Author: Benjamin Berg <Mallory@benjamins-mbp-3.media.mit.edu>
Date:   Fri Jan 29 12:09:00 2016 -0500

        Two bug fixes for segmentation tool
    
        -cropRect could possible have a dimension of 0.
        Now the minimum dimension is SEGMENT_STROKE_WIDTH
        -backdrops should have their backgrounds set to opaque
        white rather than transparent black

[33mcommit ba01d15f0ec56844eafbfd722fb46876fc31552f[m
Merge: 666dfcc 3268e57
Author: bsb20 <benberg@media.mit.edu>
Date:   Wed Jan 27 17:13:43 2016 -0500

    Merge pull request #995 from bsb20/issues/257
    
    Fixed #257 segmentation bounding rect bug

[33mcommit 3268e57d2fa657d316d74da99cf8c04f68c5f638[m
Author: Benjamin Berg <Mallory@benjamins-mbp-3.media.mit.edu>
Date:   Wed Jan 27 15:01:06 2016 -0500

        Changes to segmentationUI text
    
        -Moved/changed some text fields
        -No code path changes

[33mcommit a894b267c3e744823e430e3919d47cc306e5d5c8[m
Author: Benjamin Berg <Mallory@Benjamins-MacBook-Pro-3.local>
Date:   Wed Jan 27 10:46:19 2016 -0500

        Fixed #257 segmentation bounding rect bug
    
        -Prevent bottom and right edges of the bounding rect
        from going beyond the edges of the working area bitmap
        -Fixes #257 which was resulting in error 2030 (EOF) when
        the rectangle exceeded the edges of the bitmap

[33mcommit 666dfcc70a5696b98b91ce20c9219fdfb72bfc13[m
Merge: 8e8d00f 2da9997
Author: bsb20 <benberg@media.mit.edu>
Date:   Tue Jan 26 11:07:02 2016 -0500

    Merge pull request #991 from bsb20/issues/254
    
    Applying mask should trigger save

[33mcommit 2da9997c1c2ba13b0c9959a3b80f8ef04e93a4f2[m
Author: Benjamin Berg <Mallory@benjamins-mbp-3.media.mit.edu>
Date:   Mon Jan 25 11:07:42 2016 -0500

        Fixed undo/redo segmentation bug
    
        -Calling saveContent when committing a mask
        was creating a duplicate undo record
        -Commit now calls saveNeeded manually, and undo records
        are generated only when the segmentation tool exits

[33mcommit e5b5aa614a113050ae43f8053997be3709614683[m
Author: Benjamin Berg <Mallory@benjamins-mbp-3.media.mit.edu>
Date:   Mon Jan 25 10:40:17 2016 -0500

        Applying mask should trigger save
    
        -Do an "undoable" save when user clicks away
        -Left the option on the commitMask method because
        a redo option may need to apply a mask but should not
        create an additional undo/redo record

[33mcommit 8e8d00faf59410f3e24f4a1e84106c9f0e97edf2[m
Merge: 13e95d1 7ef0b31
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Fri Jan 22 15:49:11 2016 -0800

    Merge pull request #990 from LLK/segmentation-redo-fixes
    
        Fixed segmentation undo/redo bugs

[33mcommit 7ef0b31042ad40f88a76240c59a0e00a00047f0c[m
Author: Benjamin Berg <Mallory@benjamins-mbp-3.media.mit.edu>
Date:   Fri Jan 22 15:38:52 2016 -0500

        Fixed segmentation undo/redo bugs
    
        -There were some problems with handling click events
        -The as3 mouse events look at where the mouse ends up, which makes
        some problems
        -This is now tracked manually where necessary

[33mcommit 13e95d1afa3cd53f5953e192fe13a448b36759ff[m
Author: Christopher Willis-Ford <cwillisf@media.mit.edu>
Date:   Fri Jan 22 10:39:42 2016 -0800

    Bump version to v443

[33mcommit a497c7066be27c52c7b40ecd6dd388eebef138c1[m
Author: Christopher Willis-Ford <cwillisf@media.mit.edu>
Date:   Fri Jan 22 10:34:39 2016 -0800

    Formatting and import optimization

[33mcommit 97883c66f9467e427a9eba0b5b9991da248c8ea2[m
Author: Christopher Willis-Ford <cwillisf@media.mit.edu>
Date:   Fri Jan 22 10:18:23 2016 -0800

    Run pngcrush on all new PNGs
    
    To be honest, pngcrush didn't help much.

[33mcommit 5d09fc62934e82b91ecd6a8917ca4abd0232fc24[m
Author: Christopher Willis-Ford <cwillisf@media.mit.edu>
Date:   Fri Jan 22 09:55:58 2016 -0800

    Fixed up SDK references

[33mcommit 54d095af2476b95c9e6f7611025352dcbcf0dd80[m
Merge: 699a09a c0a711c
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Fri Jan 22 10:36:30 2016 -0800

    Merge pull request #988 from bsb20/segment-simplified
    
    Segment simplified

[33mcommit c0a711c5a42edf6a3b67e7519df1050df658585f[m
Author: Benjamin Berg <Mallory@benjamins-mbp-3.media.mit.edu>
Date:   Thu Jan 21 14:55:03 2016 -0500

        grabcut.swc is merged file now in gradle.build

[33mcommit 83f444968b523d180c39b86f8d78c0121bd4c7e8[m
Author: Benjamin Berg <Mallory@benjamins-mbp-3.media.mit.edu>
Date:   Thu Jan 21 11:33:29 2016 -0500

        changes pursuant to code review
    
        -png compression
        -getting rid of compiler warnings
        -storing fewer bitmap clones in segmentation state
        -correcting some click away segmentation behavior
        -improving the non-undoable save mechanism

[33mcommit 3248ddcc7235af6c23c9de845fa6bb33b042b075[m
Author: Benjamin Berg <Mallory@benjamins-mbp-3.media.mit.edu>
Date:   Wed Jan 20 11:22:13 2016 -0500

        Removed spurious assets, UI cleanup
    
        -Old assets from original segmentation UI
        were removed
        -Moved Help button and added text for segmentation UI

[33mcommit 552cb22a8d5cee823d116a2a57cd477814e362ed[m
Author: Benjamin Berg <Mallory@benjamins-mbp-3.media.mit.edu>
Date:   Tue Jan 12 15:14:01 2016 -0500

        simplified segmentation tool
    
        -simplified down to a one step process
        -fixed undo/redo flow to be consistent with rest of editor
        -redid segmentation UI to be just standard color picker
        -set default segmentation line width

[33mcommit 13255295c609ddd6e4dd7d357c42c4b74bc6f4c6[m
Author: Benjamin Berg <Mallory@benjamins-mbp-3.media.mit.edu>
Date:   Wed Jan 6 12:48:11 2016 -0500

        segmentation workflow optimization
    
        -no longer requires background marking
        -increased cropping tolerance for scribble

[33mcommit 57c96ebb52b962f4e590d7663c432ae7c539b8fd[m
Author: Benjamin Berg <Mallory@benjamins-mbp-3.media.mit.edu>
Date:   Wed Jan 6 12:33:02 2016 -0500

        auto application of segmentation masks
    
        -mask auto applied
        -removed "commit" stage

[33mcommit 7e606a036e59d67caa4138a6cc54a9884e03073c[m
Author: Benjamin Berg <Mallory@benjamins-mbp-3.media.mit.edu>
Date:   Fri Dec 18 17:40:03 2015 -0500

        removed reference to ScratchOnline

[33mcommit 776cc5aabd9441618a50721c63c7259db3a782a4[m
Author: Benjamin Berg <Mallory@benjamins-mbp-3.media.mit.edu>
Date:   Fri Dec 18 17:29:05 2015 -0500

        Missing asset, segmentationBusyCursor.png

[33mcommit 8ff75d88ed2a96973edc37fec9345ec09545eaf4[m
Author: Benjamin Berg <Mallory@benjamins-mbp-3.media.mit.edu>
Date:   Fri Dec 18 17:09:28 2015 -0500

        Small UI changes
    
        -undo/redo buttons control segmentation when appropriate
        -Moved confirm button for segmentation

[33mcommit 0f874bb8d2cf8d66a39028b7a012b60b6fd347b5[m
Author: Benjamin Berg <Mallory@benjamins-mbp-3.media.mit.edu>
Date:   Wed Dec 16 10:14:53 2015 -0500

        Segmentation improvements, bug fixes, new UI
    
        -Performance improved by moving all processing into as3 bitmap
        methods rather than byte level manipulation
        -UI improved through iteration with the team.  This required making
        minor changes to existing button framework to accomodate new effects
        -Fixed a bug with the segmentation crop rect which also improved
        accuracy and performance of the segmentation algo
        -General code cleanup (variable names, dead code, organization)

[33mcommit 460120d552585fe338c89f4f2231670f2cc5d61e[m
Author: Benjamin Berg <Mallory@dhcp-18-111-13-30.dyn.mit.edu>
Date:   Tue Dec 8 10:15:00 2015 -0500

        light code cleanup in background removal tool

[33mcommit 880cc1cb5cbab1e35a5da09177e6305f8ba41acc[m
Author: Benjamin Berg <Mallory@benjamins-mbp-3.media.mit.edu>
Date:   Mon Dec 7 17:40:45 2015 -0500

        remove islands implemented
    
        -may need performance improvements
        -runs removeIslands twice to remove nested islands

[33mcommit abcac9d0b68b8cc3f50911b3292d621a9e5bde95[m
Author: Benjamin Berg <Mallory@benjamins-mbp-3.media.mit.edu>
Date:   Tue Dec 1 14:25:53 2015 -0500

        Ants marching effect for segmentation
    
        -using slanted background for marching ants
        -added console object for debugging flascc swc's

[33mcommit 7cd8c7c93487bc7e271eaf2d91beb643858edc1c[m
Author: Benjamin Berg <Mallory@dhcp-18-111-99-38.dyn.MIT.EDU>
Date:   Tue Nov 24 14:38:39 2015 -0500

        added marching ants for segmentation preview
    
        -Segmentation preview mode includes marching ants
        -Frames for the animation are rendered using glow filter and assets
        added to UI/paint/segmentationAnimation
        -frames are rendered and then played back by a timer in
        BitmapBackgroundTool... is this ok?

[33mcommit d7acbf988524cc8a2f11e4e56ebc22d394f4b9dd[m
Author: Benjamin Berg <Mallory@benjamins-mbp-2.media.mit.edu>
Date:   Mon Nov 23 13:10:38 2015 -0500

        changed glow params for segmentation
    
        -Yellow, wider glow effect on segmentation previews

[33mcommit 5c54ea490d689afc868cae1135e7b7f044336bcb[m
Author: Benjamin Berg <Mallory@benjamins-mbp-2.media.mit.edu>
Date:   Mon Nov 23 10:35:18 2015 -0500

        glow

[33mcommit a748e5679d8407985fe083cb84329914aa0feee1[m
Author: Benjamin Berg <Mallory@benjamins-mbp-2.media.mit.edu>
Date:   Mon Nov 23 09:52:11 2015 -0500

        draw outlines for segmentation previews
    
        -Changed greyscale mode to show object in normal color
        -Does fairly naive drawing of object outline in greyscale
        -Performance would need work (too many border points)

[33mcommit 17e9dfffb9148f711f04c252a6d4b78d198da105[m
Author: Benjamin Berg <Mallory@dhcp-18-111-8-6.dyn.MIT.EDU>
Date:   Fri Nov 6 15:13:38 2015 -0500

        fixed linking and other segmentations bugs
    
        -Moved segmentation annotation into layer on ImageCanvas
        -UI fixes to hide colorPicker
        -calls grabCut on all annotations
        -fixed linking to grabcut.swc

[33mcommit fe4f60195960eddac9fcca1b0fa6e3ae5fcdf087[m
Author: Benjamin Berg <Mallory@benjamins-mbp-2.media.mit.edu>
Date:   Wed Nov 4 10:54:03 2015 -0500

        intermediate commit REBASE!
    
        -assets, flash porting
        -flascc compiled lib is incorrectly referenced, fix later!

[33mcommit 611a8a0a956275f5ab3642b7a0fa8498f26a60b9[m
Author: Benjamin Berg <Mallory@dhcp-18-111-15-226.dyn.MIT.EDU>
Date:   Wed Sep 30 17:48:04 2015 -0400

        intermediate commit, remove later

[33mcommit 83d0c3c70f1a03b710dcc3455e888f6d6ecb0292[m
Author: Benjamin Berg <Mallory@dhcp-18-111-15-226.dyn.MIT.EDU>
Date:   Wed Sep 30 17:45:12 2015 -0400

        added untracked bitmapbackgroundtool

[33mcommit 8da4640c5cde5c35f4ca2c092aab2d04c6f34f5c[m
Author: Benjamin Berg <Mallory@dhcp-18-111-15-226.dyn.MIT.EDU>
Date:   Wed Sep 30 16:33:43 2015 -0400

        as3 -> JS prototype for image segmentation

[33mcommit 699a09a8cc9f2ab1f283a3ce139b735e765ae575[m
Author: Christopher Willis-Ford <cwillisf@media.mit.edu>
Date:   Wed Jan 20 15:23:09 2016 -0800

    Add 'any' to strings() BlockMenus.as
    
    This is used for the `<key _ pressed?>` block in the Sensing category.

[33mcommit abec02135a858e137d68b69d0949575be5c0c816[m
Merge: d47da6a 14185e6
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Mon Dec 14 10:14:00 2015 -0800

    Merge pull request #970 from LLK/version-details
    
    Add "Version Details" dialog to shift-File menu

[33mcommit d47da6a89dfe998dbfb9011c7c91fcaaf6d5ebb6[m
Merge: f368440 6682aef
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Fri Dec 11 14:17:15 2015 -0800

    Merge pull request #969 from TheLogFather/fix-broadcast-exceptions
    
    Fix #968 - don't assume args for broadcast will be BlockArg.

[33mcommit f3684406566538a45a9e2029bba2ef2cd700da75[m
Merge: 23342bc b9cb7cd
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Fri Dec 11 13:55:44 2015 -0800

    Merge pull request #967 from TheLogFather/fix_edgetrig_varget
    
    Fix #966 by using currentDoObj in Interpreter.targetObj() & targetSprite()

[33mcommit 14185e6d527a4817f7ca2168aef1757a71e31aa7[m
Author: Christopher Willis-Ford <cwillisf@media.mit.edu>
Date:   Thu Dec 10 11:39:47 2015 -0800

    Add "Version Details" dialog to shift-File menu

[33mcommit 6682aef4cc778a5340c7725d35c07ed8279050fe[m
Author: TheLogFather <nobody@nowhere.org>
Date:   Thu Dec 10 03:41:55 2015 +0000

    Don't assume args for broadcast will be BlockArg.
    Prevents exceptions when a broadcast contains an expression, fixes #968.

[33mcommit b9cb7cde05519211388e511eb59858668bfab4bc[m
Author: TheLogFather <nobody@nowhere.org>
Date:   Thu Dec 10 00:47:13 2015 +0000

    Also check for currentDoObj in Interpreter.targetObj/Sprite().
    Fixes #966.

[33mcommit 23342bc0beeebdffb4374e6838b91ff29b5c9c7a[m
Merge: 534a2b6 19d9333
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Wed Dec 9 11:29:02 2015 -0800

    Merge pull request #913 from TheLogFather/fix_edgetrig_varget
    
    Fixes #912 and #468, and is a suggestion for an improvement to PR #901.

[33mcommit 534a2b69a04e70f94983884827662f43d8bd9731[m
Merge: 0d9aa88 d038aef
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Wed Dec 9 11:16:35 2015 -0800

    Merge pull request #956 from TheLogFather/fix-stop_this_script
    
    Fix non-refresh "stop this script" issue #475

[33mcommit 0d9aa8897ab018fdfbcbea50efa0a58be7fd2334[m
Merge: 2a604a7 58e353f
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Wed Dec 9 10:45:00 2015 -0800

    Merge pull request #949 from TheLogFather/fix-exceptions
    
    Simple, orthogonal fixes for #810, #815 and #831.

[33mcommit 2a604a7c07dcc339b47619499e89758309ad5a04[m
Author: Christopher Willis-Ford <cwillisf@media.mit.edu>
Date:   Mon Dec 7 17:08:45 2015 -0800

    Bump version to 442

[33mcommit 26606eeca34859c84836a5d06244ea83aa1077b2[m
Author: Christopher Willis-Ford <cwillisf@media.mit.edu>
Date:   Mon Dec 7 17:04:36 2015 -0800

    Fixed file permissions
    
    Quite a few files were marked executable when they shouldn't have been.

[33mcommit 673472a68c15cd6588ee71e066160ed0c833ce07[m
Merge: ffb5df8 cffff6c
Author: Christopher Willis-Ford <cwillisf@media.mit.edu>
Date:   Mon Dec 7 15:50:34 2015 -0800

    Merge branch 'release/v441'

[33mcommit ffb5df8864e661047294d8e54323dc5f87238c01[m
Merge: 0e9bee2 f2c46d6
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Mon Dec 7 15:36:00 2015 -0800

    Merge pull request #939 from LLK/project-to-video
    
    Record Project Video Feature

[33mcommit cffff6c94b78f6be3b3411088c20343dc6586b9b[m
Author: Christopher Willis-Ford <cwillisf@media.mit.edu>
Date:   Fri Dec 4 11:51:14 2015 -0800

    v441.2

[33mcommit d038aef33175e067d273a824488c5b23229f721e[m
Author: TheLogFather <adrian@adminisatorsmbp.home>
Date:   Sat Nov 21 14:07:25 2015 +0000

    Much closer to original code...
    The final popState is left to be done through the usual stepActiveThread, rather than returnFromProcedure.
    Can remove various things that were added before.

[33mcommit c61a8dc6d5476b7a4b81a8effc021baf9bf2bc41[m
Author: TheLogFather <adrian@adminisatorsmbp.home>
Date:   Fri Nov 20 20:08:18 2015 +0000

    Obviously need to nullify block for all in stack chain up to caller, because substacks...

[33mcommit ed6c4067888fcf78173c345b6385577045419fb0[m
Author: TheLogFather <adrian@adminisatorsmbp.home>
Date:   Fri Nov 20 18:08:31 2015 +0000

    Nullify activeThread.block for "stop this script" inside procedure.
    This allows it to end the script 'naturally', instead of trying to pop the state there and then.
    Hopefully fixes #475. :)

[33mcommit 0e9bee27a88698a437f050370b2d442dd13bdbe5[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Thu Nov 12 08:56:16 2015 -0800

    v441.1

[33mcommit 58e353f6f3f31d3f243915d0d4a00356a5e1ddbb[m
Author: TheLogFather <adrian@Administrators-MacBook-Pro.local>
Date:   Wed Nov 4 22:05:28 2015 +0000

    Simple, orthogonal fixes for #810, #815 and #831.

[33mcommit f8c2588543d392b13aa45896b3d542a72f56ccfd[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Tue Nov 3 16:16:46 2015 -0800

    Always include commit hash in build tag
    
    Also ignore light-weight tags.

[33mcommit e4c03aa86f3403c27822376dc0e73f2380804688[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Tue Nov 3 15:33:58 2015 -0800

    v441

[33mcommit 53fbbbaa487a0ecab2e0308a94690825a8ad9994[m
Merge: 1652d6d 5c376e5
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Tue Nov 3 15:20:54 2015 -0800

    Merge pull request #946 from LLK/fix-rtl-block-update
    
    Fix `arrayToBlock()` for null substacks in RTL

[33mcommit 1652d6da9f729c97087d8cc212eee01972c8fffb[m
Merge: 37ab414 ebbf196
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Tue Nov 3 15:20:49 2015 -0800

    Merge pull request #947 from LLK/richer-js-logging
    
    Make JS log events richer; improve callServer logs

[33mcommit 5c376e515050ef8bfa837ee09ca4a909e940bad6[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Thu Oct 29 10:35:11 2015 -0700

    Tweak loop condition in `argsForCmd`
    
    This version is equivalent but does one less add per loop.

[33mcommit 37ab4146ac21d5f58de0ad6a12077916cd0114e0[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Wed Oct 28 10:32:43 2015 -0700

    v440.4

[33mcommit ebbf1963af93d1e4f1e82461587103017ca3cf7f[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Tue Oct 27 20:43:13 2015 -0700

    Make JS log events richer; improve callServer logs
    
    - Logging events echoed to JS now have their `extraData` sent over
      intact, so that the objects can be inspected in the JS debugger.
    - JSON stringification of event `extraData` is protected with a
      try/catch, in case some non-stringifiable data sneaks in. If
      stringification throws the `extraData` will be replaced with a string
      indicating such.
    - JSON stringification has been extended to handle `ByteArray` as if it
      were a string. This probably isn't useful except for logging, but it
      does prevent an exception from being thrown.
    - The logging for `callServer` has been simplified and uncommented. It
      had originally been commented out in order to avoid overloading our
      event tracking system. That's still a concern, but now it can be
      logged as a warning: it won't generate a tracking event, but it will
      show up in the logging history if a critical error happens afterward.
      It will also show up in the JS console.

[33mcommit f2c46d6e5e6f54464809bf592c3b1417e758c0c9[m
Author: Rachel Thornton <rthorn@mit.edu>
Date:   Sat Oct 17 17:59:26 2015 -0400

    Fixed analytics event

[33mcommit 17f9ba7a62d25b326039d165e3d840636faf610d[m
Merge: 8482a78 982c2a8
Author: Rachel Thornton <rthorn@mit.edu>
Date:   Sat Oct 17 17:57:31 2015 -0400

    Merge branch 'master' into project-to-video

[33mcommit 8482a78b90e8c8b820d046c5cc486b9b3dd9bc84[m
Author: Rachel Thornton <rthorn@mit.edu>
Date:   Sat Oct 17 17:57:02 2015 -0400

    Added additional tracking events for analytics

[33mcommit 6dd992ed9802ab65bca257039b3b73b41a22033c[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Thu Oct 15 15:36:16 2015 -0600

    Fix `arrayToBlock()` for null substacks in RTL
    
    When the user selects a new language, the process of updating the script
    blocks with new strings involves converting them to an array-based
    representation and back. The way this process was distinguishing between
    block arguments and substacks had trouble with `null` values, leading to
    situations where substacks could be eliminated after being interpreted
    as extraneous block arguments. The new code uses the number of block
    arguments to avoid the need for such inspection.
    This fixes LLK/scratch-flash#942

[33mcommit 982c2a869785c288f6c6a82cc34c76b73cb94733[m
Merge: 6499255 c6c9c55
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu Oct 15 11:12:57 2015 -0600

    Merge pull request #945 from LLK/fix-block-menu-focus
    
    Fix block menu focus

[33mcommit c6c9c55a9fc75e6b844516212bcf745665912ba8[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Thu Oct 15 11:03:59 2015 -0600

    Clear focus when selecting from a block arg menu
    
    This fixes LLK/scratch-flash#884

[33mcommit ee9e000fbec09736e938eb10037b3e071e522956[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Thu Oct 15 11:02:02 2015 -0600

    Merge KEY_DOWN handlers in Scratch.as
    
    We had two handlers for KEY_DOWN, both of which could respond to certain
    keypresses such as the Escape key. The handlers are now merged so that
    each keypress only causes one reaction in the class.

[33mcommit 64992555249f45bc9d89e2a40930d268358f61f6[m
Merge: 561bfb4 dea8153
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Thu Oct 15 08:04:44 2015 -0600

    Merge branch 'release/v440'

[33mcommit dea8153ae5fdf57e2de8876c1a8c55af7174fcb5[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Tue Oct 13 13:42:11 2015 -0600

    v440.3

[33mcommit 561bfb42846c182503faa5f99a0b8f2a31ce018d[m
Merge: dfda28d d0bad1e
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Tue Oct 13 13:40:49 2015 -0600

    Merge branch 'release/v440'

[33mcommit d0bad1ed1412e4aa798434f5854a4d653ddf4b0a[m
Merge: e1842f6 de0bd77
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Tue Oct 13 13:40:12 2015 -0600

    Merge pull request #943 from LLK/js-throw-warning
    
    Log `jsThrowError()` as a warning

[33mcommit de0bd77233e9f1f45f339bd3757b1f6c86b009e0[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Tue Oct 13 12:12:53 2015 -0600

    Log `jsThrowError()` as a warning
    
    We're getting a lot of error events from this, especially for "Calling
    JSeditorReady() failed." Changing these messages to warnings will
    prevent us from getting error events for what looks like a symptom
    rather than the actual cause. The warnings will still appear in the log
    for an error that happens afterward.

[33mcommit 67023cbe79566342be8748f18ae59e7589531ea9[m
Merge: 1d1a5d9 dfda28d
Author: Rachel Thornton <rthorn@mit.edu>
Date:   Sun Oct 11 17:57:17 2015 -0400

    Merge branch 'master' into project-to-video

[33mcommit 1d1a5d92dd8ad0a54a7177f662665c4f52ff15cb[m
Author: Rachel Thornton <rthorn@mit.edu>
Date:   Sun Oct 11 17:57:16 2015 -0400

    Cleaned up code
    
    Made suggested changes to clean up some code.

[33mcommit e1842f6b1d01e2d6375317679ef48a7673e403eb[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Thu Oct 8 08:21:42 2015 -0700

    v440.2

[33mcommit dfda28d811e24601d0935177eda348c14bf5b751[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Mon Oct 5 10:31:31 2015 -0700

    Add .gitattributes to set EOL on gradlew, .git*

[33mcommit ef742aced0bedc6e07752f720611550fee7354f9[m
Merge: ca4b171 4d34b1b
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Mon Oct 5 10:23:07 2015 -0700

    Merge branch 'release/v440'

[33mcommit 4d34b1bb2223c1b3e2d26771d0ce7db79eb1048a[m
Merge: 75eabbf 4666f3c
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Mon Oct 5 10:01:32 2015 -0700

    Merge pull request #940 from LLK/translation-error-logging
    
    Improve logging, especially for translation errors

[33mcommit 4666f3c99f05aa28a3231c830d73e6ee6873e22f[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Mon Oct 5 09:43:37 2015 -0700

    Improve logging, especially for translation errors
    
    Logging events forwarded to the JS console now include extradata.
    The `currentLang` is set in Translator.as before checking for
    translation problems instead of after.
    When a warning is logged due to a block argument mismatch, the current
    language is included in the event.

[33mcommit 75eabbfff80ba204803927fc145d189812e268d0[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Mon Oct 5 08:57:36 2015 -0700

    v440.1

[33mcommit d42d785f69f2c0ba637895c2952cec81ba5a7337[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Mon Oct 5 08:56:10 2015 -0700

    Turn 'Block argument mismatch' into a warning

[33mcommit ee7b651778d6456667fa90bbbf506ec38b951b72[m
Author: Rachel Thornton <rthorn@mit.edu>
Date:   Thu Oct 1 15:05:19 2015 -0400

    Added logging
    
    Logs when video is started, and when video is downloaded. (downloaded
    event includes length of video and size of video)

[33mcommit 0918475205dc77fad2ccf634b09419877daee550[m
Merge: 9f43ae4 ca4b171
Author: Rachel Thornton <rthorn@mit.edu>
Date:   Thu Oct 1 14:49:17 2015 -0400

    Merge branch 'master' into project-to-video

[33mcommit ca4b17110be697da83203b2802229240aff7c706[m
Merge: 2414666 b5ee405
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Thu Sep 24 11:45:22 2015 -0700

    Merge branch 'release/v440'

[33mcommit b5ee405e3ddf7600f9de471ca86202682c721eae[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Thu Sep 24 10:10:32 2015 -0700

    Open internal extension tips with 'ext:' tag
    
    Internal extensions have special tips content formatted for the built-in
    tips window. These pages are accessed by passing a specially formatted
    tag to the tips API in JavaScript -- for example 'ext:LEGO WeDo' for the
    WeDo extension. This change makes the editor supply that sort of tag
    when opening tips for an internal extension. The behavior is unchanged
    for non-internal extensions.
    
    This fixes LLK/scratchr2#2709, assuming the tag -> URL mapping is
    correct on the JavaScript side of the tips system.

[33mcommit 241466682b5ef27537c3039e4f46886c95b81543[m
Merge: bbf4cdc 8aa21fd
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Sep 22 12:13:11 2015 -0700

    Merge branch 'release/v440'

[33mcommit 8aa21fd70c2e9e5b8f22e9b9716375826a0c9ef8[m
Merge: 28cfde9 865bc03
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Tue Sep 22 12:11:32 2015 -0700

    Merge pull request #936 from LLK/add-scriptspane-strings
    
    Add strings() method to ScriptsPane

[33mcommit 865bc03e331330b544faeb377209b7b2f5654dd7[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Sep 22 11:03:16 2015 -0700

    Add strings() method to ScriptsPane
    
    The 'clean up' string was not being included in the editor exports, so
    I've added it here explicitly. The 'add a comment' string was already
    included in the editor exports, but I can't figure out why... it seems
    best to properly include it here as well.

[33mcommit bbf4cdc6a7b86c44dbbe8ac14baa67de34688f53[m
Merge: 4967d90 28cfde9
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Sep 22 09:05:39 2015 -0700

    Merge branch 'release/v440'
    
    Bug fixes for v440

[33mcommit 28cfde97f088e83cb3586fea084396c5d2015d8e[m
Merge: 472a02c a394eed
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Tue Sep 22 09:04:02 2015 -0700

    Merge pull request #929 from LLK/fix-jsThrowError-logging
    
    Fix the way jsThrowError logs its message

[33mcommit 472a02cfcebc73c185235e1cfd9373b97b4e1d68[m
Merge: a215fd6 f5fed39
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Tue Sep 22 09:02:02 2015 -0700

    Merge pull request #927 from LLK/fixes-for-offline
    
    Fixes for offline

[33mcommit a215fd6d2f3b5e1b7b96330246e78d3e500b9022[m
Merge: cfda457 f74a52d
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Tue Sep 22 08:51:25 2015 -0700

    Merge pull request #930 from LLK/fix-load-empty-svg
    
    Check length before magic on sprite/costume upload

[33mcommit 4967d90b408ad67b29f381a0a8758022c97d9ac0[m
Merge: 5b0af9f cfda457
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Sep 22 08:17:58 2015 -0700

    Merge branch 'release/v440' for translation strings

[33mcommit cfda457c53a62d2e6a34af18affa97ad89135110[m
Merge: 18b593e 3afc63d
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Tue Sep 22 08:10:53 2015 -0700

    Merge pull request #934 from LLK/add-missing-L10n-strings
    
    Make two more strings available for translation

[33mcommit 3afc63d12920982e44c32a8c74afc252c74b88a0[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Sep 21 14:25:15 2015 -0700

    Make two more strings available for translation
    
    The 'clean up' and 'when Stage clicked' strings are now available
    for translation.
    This fixes LLK/scratchr2#2785

[33mcommit f74a52d626153b76767379336172f1d33f964b4e[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Sep 18 17:34:58 2015 -0400

    Check length before magic on sprite/costume upload
    
    This avoids throwing an exception when attempting to read a very short
    file, such as a zero-byte file.
    This fixes LLK/scratch-flash-online#102

[33mcommit a394eed7d9877afe9680e1b8c38d9451729b2c7d[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Sep 18 16:20:41 2015 -0400

    Fix the way jsThrowError logs its message
    
    This was using the wrong call and causing these errors to be logged as
    "err" with the actual message stored in the extraData field.
    
    This fixes LLK/scratch-flash-online#211

[33mcommit f5fed39e696e2a079095c4be83627334f994c285[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Sep 18 14:04:30 2015 -0400

    Move resetPlugin() into Scratch.as

[33mcommit 8ed415472a01d874722051100b213903f29e3712[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Sep 18 13:57:05 2015 -0400

    Stop trying to access user agent string in offline
    
    This prevents an exception from being thrown in the offline editor. The
    exception was handled silently and didn't appear to cause any problems,
    but it's better to not throw at all.

[33mcommit b4e6e2b8b9d158c7d06c755c8ace44f566786d80[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Sep 18 13:55:00 2015 -0400

    Create a function for resetPlugin()
    
    This will allow the offline editor to override this function.

[33mcommit 9f43ae4bba86d601544907e77b47d872ca42f18f[m
Merge: 54e7c00 5b0af9f
Author: Rachel Thornton <rthorn@mit.edu>
Date:   Fri Sep 18 11:40:55 2015 -0400

    Merge branch 'master' into project-to-video

[33mcommit 54e7c00e52b42620e5a276756d3925a792b324a8[m
Author: Rachel Thornton <rthorn@mit.edu>
Date:   Fri Sep 18 11:40:41 2015 -0400

    Wording updates
    
    Potentially final wording

[33mcommit 5b0af9f9937b205a4e030f36c19ff8feccd1aeb4[m
Merge: 18b593e bba7c20
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Fri Sep 18 11:31:29 2015 -0400

    Merge pull request #924 from LLK/fix-bitmap-vector-2x2
    
    Skip empty bitmap element Bitmap-to-Vector convert

[33mcommit bba7c204462b6c4f5897bf18aeb1270a9778424b[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Sep 18 11:16:02 2015 -0400

    Skip empty bitmap element Bitmap-to-Vector convert
    
    If we notice that all of the pixels of the bitmap are transparent then
    there's no need to add a bitmap element to the SVG.
    This fixes #415

[33mcommit 18b593ef01f9bd12f468cbc32d580c365ecdeec4[m
Merge: 23161f5 d64eb42
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu Sep 10 15:12:47 2015 -0700

    Merge pull request #906 from LLK/editor-logging
    
    Editor logging

[33mcommit 23161f5607704aeb1f914918667510781c606425[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Sep 10 11:43:06 2015 -0700

    v440 version bump

[33mcommit b68196357f9e72a34828ae56a499a5869d8a89f4[m
Merge: 36903f7 d768a41
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu Sep 10 09:30:41 2015 -0700

    Merge pull request #888 from LLK/extension-fixes
    
    Extension URL fixes

[33mcommit bcee6292d5edab4668724692952c07a6e8755838[m
Author: rthorn <rachelt4336@comcast.net>
Date:   Wed Sep 9 20:14:59 2015 -0400

    Merging with master

[33mcommit 181a26f2156da642e4f03deaad00adaa403158ca[m
Merge: 776d2fe 36903f7
Author: rthorn <rachelt4336@comcast.net>
Date:   Wed Sep 9 20:14:45 2015 -0400

    Merge branch 'master' into project-to-video

[33mcommit 776d2fe44cd9d1f2b6e6477b80a6bcac99436aae[m
Author: rthorn <rachelt4336@comcast.net>
Date:   Wed Sep 9 19:35:54 2015 -0400

    Dialog fixes and wording

[33mcommit 36903f7b5ca5128842c99f44e302ce428a69005c[m
Merge: 2c9a7cb d768b90
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Wed Sep 9 09:30:39 2015 -0700

    Merge pull request #911 from LLK/fix-bitmap-undo-redo
    
    Change the way paint actions are committed on undo

[33mcommit 2c9a7cb4660f798d3be8d4a662b6fdee50974251[m
Merge: 23c88f9 2a469bd
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Wed Sep 9 08:36:51 2015 -0700

    Merge pull request #916 from LLK/fix-touching-partially-offscreen
    
    Fill off-stage areas with white for touch test

[33mcommit 2a469bdf1b832938003df2f3d372d91e79965f4d[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Sep 8 16:52:48 2015 -0700

    Fill off-stage areas with white for touch test
    
    When in 2D, doing a `touching color` test while a sprite is partially
    off the stage tests against solid white. This change implements the same
    behavior in 3D, where previously the region would be transparent black.
    
    This is a partial fix for #850.

[33mcommit 23c88f9ff8ca787680c6f35a3d12a089595bd532[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Sep 3 10:44:18 2015 -0700

    v439.3

[33mcommit 19d9333e52ab924293ec09a050dbe951c40a7272[m
Author: TheLogFather <adrian@Administrators-MacBook-Pro.local>
Date:   Sun Sep 6 15:18:33 2015 +0100

    Fixes #912 and #468, and is a suggestion for an improvement to PR #901.
    It adds a new public var in ScratchRuntime.as, currentDoObj, which can be set during allStacksAndOwnersDo. Only processEdgeTriggeredHats uses it here (since that's causing #901 and #468, referencing a stack which is not the currentThread), but it can potentially be used if there are other such cases (for example, a hacked "when I receive" hat block will likely also run into the same bug).

[33mcommit eef7a8fdaa81dba6ff1528be351679683e028990[m
Merge: a0c950a 3244048
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu Sep 3 13:28:35 2015 -0600

    Merge pull request #901 from LLK/fix_varget_error
    
    Fix error when primVarGet is called without an active thread.

[33mcommit a0c950aaeaa46ff7a8706a2fb4aa96d000d1f56d[m
Merge: 4eb9073 97b8eec
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu Sep 3 10:36:26 2015 -0700

    Merge pull request #909 from LLK/fix-linux-white-screen
    
    Set stage color only if supported

[33mcommit 4eb9073f283ecfc52174be83e74b7b82194940ff[m
Merge: 52c1a93 d50f71b
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu Sep 3 09:48:34 2015 -0600

    Merge pull request #900 from LLK/fix_path_error
    
    Use app's stage instead

[33mcommit 52c1a9336f453ce8ca9841151c36ebf90eec031b[m
Merge: c0eeb54 b03f2f6
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu Sep 3 09:45:25 2015 -0600

    Merge pull request #902 from LLK/fix_gif_into_editor
    
    Support importing animated GIFs into a costume

[33mcommit d768b9046740d13160040fbc0ca2fa86c3862668[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Sep 2 15:05:07 2015 -0700

    Change the way paint actions are committed on undo
    
    On undo or redo, we now reactivate the tool that currently looks like
    it's active. This means that pressing undo with an action in progress
    commits that action just like changing a tool would, reducing the number
    of code paths which commit an action. The old way was not working if the
    undo button was pressed immediately after drawing an ellipse, a
    rectangle, or some text.
    This fixes #678

[33mcommit 00755cb758d5dd39be9fb9ca81dcab1b75218969[m
Author: rthorn <rachelt4336@comcast.net>
Date:   Tue Sep 1 12:52:57 2015 -0400

    Fixed issue with 3D projects in full editor mode and small stage or presentation mode
    
    Fixed size of projects in 3D projects when recording the full editor
    and in either small stage or presentation modes.

[33mcommit 4604e206a2d01887993f8fc486c13e8afb703897[m
Author: rthorn <rachelt4336@comcast.net>
Date:   Tue Sep 1 11:36:47 2015 -0400

    Fixed sizing issue with dragged sprites
    
    Sprites were wrong sizes in small stage and presentation modes

[33mcommit a804d6ce8effee3e5bfcafb783eb39bee1ea620e[m
Author: rthorn <rachelt4336@comcast.net>
Date:   Tue Sep 1 10:21:51 2015 -0400

    Added mouse cursor
    
    Also improved mouse clicks, recorded dragged sprites

[33mcommit 97b8eec681ae5d4f0adf268887a7c35e91491635[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Aug 31 18:39:33 2015 -0700

    Set stage color only if supported
    
    We were setting the `color` property on the stage with the assumption
    that it would fail silently on versions of Flash which didn't support
    that feature. Unfortunately on Linux this throws an exception. This
    change checks for the property before trying to set it.
    This fixes LLK/scratch-flash-offline#80

[33mcommit c0eeb543d43c73078e88e043ee898ce93df5afd4[m
Merge: 417178c d5b097a
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu Aug 27 16:33:47 2015 -0700

    Merge pull request #904 from LLK/extension-stop-event
    
    Make stop button call ScratchExtensions.stop()

[33mcommit d64eb42fdd95e8c4ff6f44d9f06da3f31fbcec80[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Aug 27 15:27:09 2015 -0700

    Add a way to turn off echoing log messages to JS

[33mcommit f7d27c5e00cb5f81894dce2953e4a09230500d47[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Aug 26 15:31:03 2015 -0700

    Convert logging calls to new logging system

[33mcommit 5d038d9a9b50eac85c76c39f6498d566b3ea8542[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Aug 25 15:33:33 2015 -0700

    Add "Tracking" log level
    
    This log level will report the event to JS so that it can trigger web UI
    changes, get reported to GA, etc.

[33mcommit 51585708dcc24a446dff1d77a04a05e29ae3a8d0[m
Author: rthorn <rachelt4336@comcast.net>
Date:   Wed Aug 26 13:13:24 2015 -0400

    Added modified Slider class
    
    Modified Slider allows for triangular volume slider

[33mcommit ec9ccaac86d2c00c69192da52bf726efff3f1512[m
Author: rthorn <rachelt4336@comcast.net>
Date:   Wed Aug 26 12:03:08 2015 -0400

    Added FLV recording feature

[33mcommit cda89570c2fb294c69e1b9056bf3dba02965561c[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Aug 25 13:29:38 2015 -0700

    Log to browser and trace when in debug

[33mcommit f166e9ab2f829f39a672ebf75e092e037b216171[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Aug 25 12:42:42 2015 -0700

    Fix logging directory/package capitalization

[33mcommit d740e8d678f4897bea9ce8fbe2a7063625c96d6a[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Jul 20 18:28:08 2015 -0400

    Renamed toJson() to report() and reformatted
    
    The report() method on Log() is now formatted for readability on our
    event reporting middleware.

[33mcommit ade91b79a6ec43b226f8ba82be923542ed15a86a[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Jul 20 18:27:57 2015 -0400

    Simplified log levels

[33mcommit ecc60e5f35dfa06ee5c597ed6523c0755741c26f[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Jul 20 12:09:51 2015 -0700

    Store severity as int instead of String
    
    Also include severity in toJSON() output.

[33mcommit 96066b3480dfc7c787ef522a078ae584b4b8b00a[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Sun Jul 19 09:21:59 2015 -0700

    First pass at logging system for the editor
    
    The idea with this logging system is that we will record up to a fixed
    number of events, and if a major error occurs then we will attach the
    contents of the log (the last N events) to the error report. This
    logging system tries to optimize its GC impact for that pattern of use:
    in particular, logging events should have minimal GC impact -- maybe
    even none if the extraData field isn't used and messageKey strings are
    reused. Attaching the log to an error report will have significant GC
    impact, but ideally that should be rare.

[33mcommit d5b097af68261eee23b789179e83535fb7eb98d5[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Aug 24 18:01:27 2015 -0700

    Make stop button call ScratchExtensions.stop()
    
    The `stop()` method is a new method that will allow ScratchExtensions to
    decide whether to call the new `_stop()` method or the old `resetAll()`
    method on a per-extension basis.

[33mcommit b03f2f689299ae7fafa69cdc692121fa413f1882[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Aug 21 10:35:01 2015 -0600

    Support importing animated GIFs into a costume

[33mcommit 3244048fb1c855821d482b4875b7cc73378c6873[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Aug 21 09:59:55 2015 -0600

    Return zero if there is no active thread.

[33mcommit d50f71bdd29367c571b04fcb2dda8c63ceb5135f[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Aug 20 15:01:21 2015 -0600

    Use app's stage instead
    
    If the instance has been removed from the stage then this.stage will be null. Use the app's stage to avoid a null stage value.

[33mcommit 417178c024089e748d7d349459250c348344ff15[m
Merge: 2d5dcb0 3b295e4
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Aug 20 11:32:09 2015 -0600

    Merge branch 'master' of github.com:LLK/scratch-flash

[33mcommit 2d5dcb08c7f013f902e3ce168f6c71ab24dde1a4[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Aug 20 11:31:59 2015 -0600

    bumped version to 439.2

[33mcommit 3b295e4edb75774f2366fb814986f78840d47695[m
Merge: 6911ac8 758493b
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu Aug 20 11:30:48 2015 -0600

    Merge pull request #898 from LLK/fix_sound_error
    
    Don't play beyond the end of our buffer

[33mcommit 6911ac800ed54ddfd53f999d9c2e70bf158c6349[m
Merge: a1d7788 5b9ec0c
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu Aug 20 11:29:36 2015 -0600

    Merge pull request #899 from LLK/fix_text_error
    
    add null check

[33mcommit a1d77886ca5f81567f2f5401075229c2ae402752[m
Merge: 10a3c21 936abf8
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu Aug 20 11:29:26 2015 -0600

    Merge pull request #897 from LLK/fix_too_big_tex
    
    Bump down the max texture size.

[33mcommit 10a3c21d86fefd705df2f70865d3451bceebeaa9[m
Merge: b1e2d75 2d21e53
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu Aug 20 11:23:24 2015 -0600

    Merge pull request #896 from LLK/fix_3d_exception
    
    Make sure the backbuffer isn't too small

[33mcommit 5b9ec0c68dc177c300e9c4463ca6effae45704d6[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Aug 20 10:48:44 2015 -0600

    add null check

[33mcommit 758493b6dd6f6788238e95ededac9f667a9b9132[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Aug 20 10:35:35 2015 -0600

    Don't play beyond the end of our buffer

[33mcommit 936abf8f67fac778519d5c5f3989290eb77337af[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Aug 20 10:13:47 2015 -0600

    Bump down the max texture size.

[33mcommit 2d21e5348dbd93c52ce81f8660c0cf6d45c7b488[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Aug 20 09:53:18 2015 -0600

    Make sure the backbuffer isn't too small

[33mcommit b1e2d7529bae9edc23a7400130e3f466346a2f4f[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Aug 7 10:46:42 2015 -0700

    Bump version to 439.1

[33mcommit d768a4116b85ce0ffed65e2b87678857b6f619ef[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Aug 5 14:41:16 2015 -0700

    Load official extensions using URL overrides
    
    This should make official extensions work correctly in both staging and
    production environments.
    Future improvement: override the new getOfficialExtensionURL() method in
    the offline and maybe online editors to reduce the need for tests here.

[33mcommit 1846f8f6e41baa3bc6a6efbefd30421157d9d00c[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Aug 5 10:16:03 2015 -0700

    Fixed WeDo and PicoBoard help links

[33mcommit 562b9afc6104798cdba06ddebcafc150a5cf5ac8[m
Merge: 803ba94 e753315
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Tue Aug 4 11:45:39 2015 -0700

    Merge pull request #885 from LLK/fix-key-pressed
    
    Fix exception when processing `key () pressed?`

[33mcommit e75331536ddaff12dee1f43d1de4fe6a9bdc1f78[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Aug 4 10:23:33 2015 -0700

    Fix exception when processing `key () pressed?`
    
    When 'any' key support went in, this code was rearranged so that
    checking `stack.args[0]` was no longer protected by the `stack.op` check
    through short-circuiting. This change makes the `stack.op` check happen
    first again, accessing `stack.args` only if that check passes.

[33mcommit 803ba94cd63356796303dc99c49ec3c4a723ae14[m
Merge: 9f5edb7 1dc967a
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Mon Aug 3 11:28:49 2015 -0700

    Merge pull request #882 from LLK/fix-load-experimental-button
    
    Show Load Experimental Extension only in dev mode

[33mcommit 1dc967ac9360f34919d19c2c6b90a7dd8fbe8f37[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Aug 3 09:10:29 2015 -0700

    Show Load Experimental Extension only in dev mode
    
    The button only works on ScratchX so it should be hidden elsewhere.
    This fixes LLK/scratch-flash-online#186

[33mcommit 9f5edb77d79dea4315a80591c7b8658b326c867e[m
Merge: 967aef3 49417ea
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Fri Jul 31 19:20:40 2015 -0700

    Merge pull request #879 from LLK/gradle
    
    Set up Gradle build scripts and tell Travis to use them

[33mcommit 49417ea52b13899dde766d852ade5d00417de52e[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Jul 31 19:06:20 2015 -0700

    Implement actual git commit ID collection
    
    This replaces the hardcoded placeholder.

[33mcommit 48cc231912b3cdd9ec545c9f0042ddbcde33b61d[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Jul 31 17:07:50 2015 -0700

    Tell Travis to use 'build' instead of 'assemble'
    
    Also, build both 10.2 and 11.6 in the Travis "install" phase.
    It seems that GradleFX doesn't do anything useful on 'assemble' -- at
    least not with our current configuration.

[33mcommit bac69eea41d35cfc8cf803e6050ed58d10543098[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Jul 31 17:07:39 2015 -0700

    Turn on advanced telemetry

[33mcommit 67907db0f9dbada3da14e7ccb80d95cae5a03f8f[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Jul 31 12:39:17 2015 -0700

    Use target=10.2 instead of variant=Old
    
    I think this will be more clear to future devs

[33mcommit 967aef321971d80562fa709749d74472066b4eec[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Jul 30 09:50:25 2015 -0700

    v439

[33mcommit 8df2fa8be01d256432197ec62243d76fc3c03428[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Jul 29 17:09:21 2015 -0700

    Make output file (and path) reflect variant

[33mcommit be243d34e7efb02db23addf4ccb051d08f677210[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Jul 29 15:52:05 2015 -0700

    Use ext.commonDir to locate config.groovy and libs
    
    Also added osmf.swc

[33mcommit c772f0515aa59671211a4205ee710179611da889[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Jul 29 14:59:55 2015 -0700

    Move most Gradle logic into scratch.gradle
    
    The core logic can now be shared with the online and offline editors.

[33mcommit d0459a1b44184da7d874bf660db2f766378088c9[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Wed Jul 29 18:43:45 2015 +0000

    Make gradlew executable

[33mcommit a79b86f01cb56ca1b472a057b615115dc8f1bbfd[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Jul 29 11:39:16 2015 -0700

    Switch Travis to use Gradle

[33mcommit 5156e7414dcb3f7fa6694432444acef818deccd0[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Jul 29 11:18:29 2015 -0700

    Add initial version of Gradle build files
    
    Use `gradle build` to build the default variant, currently `New`.
    Use `gradle build -Pvariant=Old` to build the `Old` variant.
    `New` targets Flash 11.6 and `Old` targets Flash 10.2

[33mcommit 20902bf8a1845c5dc9eb8499b5a4912878e9255c[m
Merge: bf4cceb 8818422
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu Jul 23 15:22:08 2015 -0400

    Merge pull request #866 from LLK/fix_empty_png
    
    Don't thrown an exception when loadBytes fails.

[33mcommit 88184226df535cd1b889c02807226dc2a0e07284[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Jul 23 11:23:14 2015 -0400

    Don't thrown an exception when loadBytes fails.

[33mcommit bf4ccebd2dc29ef5c2bded442003cceac4bc85c6[m
Merge: fbb6de8 bc4e67d
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jul 21 16:37:26 2015 -0400

    Merge pull request #864 from LLK/change_key_menu
    
    Moved any key in menu

[33mcommit fbb6de87f974667a0ba475d1cd9521ba0aeba769[m
Merge: 6b78730 c9c1888
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jul 21 16:26:49 2015 -0400

    Merge pull request #654 from AndersBillLinden/rename-broadcasts
    
    Renaming broadcasts (using right click menu)

[33mcommit bc4e67d64e519a15a276f2b586ae80217731bd89[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Jul 21 16:24:13 2015 -0400

    Moved any key in menu

[33mcommit 6b78730df04c73e64ebd31f902e2347dd5ca2a90[m
Merge: 211f699 045be16
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jul 21 16:21:02 2015 -0400

    Merge pull request #334 from nathan/any-key-pressed
    
    Add "any" to key press menu

[33mcommit 211f6992891f6a00ab0769121c8b2d430f7d736a[m
Merge: d7455e3 f1c5e5a
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jul 21 16:17:36 2015 -0400

    Merge pull request #797 from TheLogFather/go-to-definition
    
    Adds new item "go to definition" for drop-down menus of custom block callers

[33mcommit f1c5e5a08eb67b2e1dd3e4d49d81bd0847507a1d[m
Author: TheLogFather <adrian@Administrators-MacBook-Pro.local>
Date:   Tue Jul 21 21:05:02 2015 +0100

    Change menu item to just "define".

[33mcommit 067fda0434d9d836d98e058875f64b66441abb75[m
Author: TheLogFather <adrian@Administrators-MacBook-Pro.local>
Date:   Tue Jul 21 14:58:05 2015 +0100

    Change menu item text to "see the define script".
    Change function name to match spec name (Spec.PROCEDURE_DEF="procDef").
    Slight tidy-up of code.

[33mcommit d7455e344548970d89f6be404241bb6e74801c9e[m
Merge: 86361a4 e3bbd74
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jul 21 00:27:16 2015 -0400

    Merge pull request #862 from LLK/optimize_watcher_toggle
    
    Optimize toggling watcher visibility

[33mcommit 86361a441f464e80787c0add4432c075b836ed86[m
Merge: 0302164 6068898
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Jul 20 23:59:41 2015 -0400

    Merge pull request #718 from AndersBillLinden/esc-drag-operation
    
    Aborting block drag operations by pressing ESC.

[33mcommit 03021646fe256e1e8c0d2f04b10cf42c18520147[m
Merge: 1f8872d 1b61f26
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Mon Jul 20 23:51:16 2015 -0400

    Merge pull request #860 from LLK/fix_blank_sound_tab
    
    Added a null check in imaDecompress.

[33mcommit 1f8872db7bc913bbc25b66d559597ae62447884c[m
Merge: 24a4999 d577b67
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Jul 20 23:31:52 2015 -0400

    Merge pull request #639 from AndersBillLinden/rename-var-fill-in-current-value
    
    When renaming a variable, the current name is proposed.

[33mcommit 24a499966ff296b4513c9541f25f5633a9350ce7[m
Merge: e53257e bfd68a9
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Jul 20 23:18:20 2015 -0400

    Merge pull request #335 from nathan/corner-rounding
    
    Fix corner rounding

[33mcommit e3bbd7462870d27317e1a7fba927182548642688[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Jul 17 14:21:15 2015 -0600

    Don't update the palette if nothing changed.

[33mcommit e53257e344b757e09daa6baf834d563825d8cfe0[m
Merge: bb4c35e 8a02c38
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu Jul 16 09:03:01 2015 -0700

    Merge pull request #859 from LLK/fix_str_cmp
    
    Fix argument comparisons

[33mcommit 1b61f2602c288f483fb26feb0d9c696ee18bb9c6[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Jul 16 09:51:29 2015 -0600

    Added a null check in imaDecompress.

[33mcommit 8a02c38ec24ce335d8f1b7804e82fe41b1bb55d9[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Jul 16 09:36:41 2015 -0600

    Fix 1/0 == 'Infinity'

[33mcommit 6afc2e85b44da27866437ba3e965cc2d19eaed9c[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Jul 16 09:26:49 2015 -0600

    Don't suffix empty strings

[33mcommit bb4c35e742fd2a666722443397c22aaded0bf244[m
Merge: 41646ae 333c0cd
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu Jul 16 09:07:02 2015 -0600

    Merge pull request #851 from LLK/ant-build-improvements
    
    Ant build improvements

[33mcommit 333c0cdad782b077db4d7b630113681e0e37aef2[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Jul 15 14:40:00 2015 -0700

    Change Flash version requirement from 11.9 to 11.6

[33mcommit 6d422c1697c41d38ba56ed396efac00a79cd5a7f[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Jul 15 14:07:38 2015 -0700

    Bump "new" build from Flash 11.4 to Flash 11.6
    
    Flash 11.6 is the earliest version that supports our current 3D code.

[33mcommit ce9a7fd6ffd6881a40a44a4722e68218fccbe29c[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Jul 15 13:34:01 2015 -0700

    Fixes for git-commit-id macro
    
    All variables used by git-commit-id (except the output) are now local.
    The git command now runs in the repository directory instead of current.

[33mcommit d011845131ba6610758fba906aed9c7237b87774[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Jul 15 13:22:47 2015 -0700

    Cleaned up Ant build script and added commit ID
    
    This change makes SCRATCH::revision available as a string in the AS3
    code. When built through IDEA this string will be 'dev' and when built
    through Ant this string will contain information about the current git
    commit. The information shown is currently the output of the command:
    `git describe --dirty --tags --always`
    
    The new file `build-common.xml` contains a macro that does the work to
    collect that information. This macro should be usable from the online
    and offline editor build scripts.

[33mcommit 41646aebf0cf0a6b10d08838c65c5f86472ff967[m
Author: Matthew Taylor <mewtaylor@gmail.com>
Date:   Wed Jul 15 14:06:34 2015 -0400

    Make `addBackdrop` protected

[33mcommit ff28aeeb824f9a767ee1057a41e2a27bb7c5f56e[m
Author: Matthew Taylor <mewtaylor@gmail.com>
Date:   Wed Jul 15 13:52:30 2015 -0400

    Make camera methods protected

[33mcommit d6d02d269e731f8f1b4947cb89dbff02fe7b587c[m
Merge: 6ae9d10 5a9bdfd
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Jul 13 17:48:57 2015 -0600

    Merge pull request #847 from LLK/fix-issue-845
    
    Ensure correct appScale when activating 3D mode

[33mcommit 5a9bdfde8c767861531e62243b048ecd54d0c619[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Jul 13 15:43:17 2015 -0700

    Ensure correct appScale when activating 3D mode
    
    Instead of calling `setRenderView()` when setting up the 3D context,
    call `onStageResize()` which calls `setRenderView()` after calculating
    `appScale` and collecting the UI transform.
    
    Test case: see issue #845

[33mcommit 6ae9d10a3a18b6edfc31d81b0718a16b23996e87[m
Merge: 1e551ac a3e8049
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Jul 13 09:26:51 2015 -0600

    Merge pull request #846 from LLK/fix-transparent-video
    
    Apply video transparency as ghost effect

[33mcommit a3e8049e6bfdf0eabd6b3386a20b6d72bb611150[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Sun Jul 12 19:43:06 2015 -0700

    Apply video transparency as ghost effect
    
    The previous method of making the video image transparent relied on the
    fact that all objects were drawn with the same shader, and allowed the
    video image's alpha value to be used in place of the ghost effect. This
    broke when we started determining the shader on a per-object basis. Now
    video transparency is implemented by applying the standard ghost effect
    to the bitmap object representing the video image.
    
    This fixes LLK/scratch-flash#837 and LLK/scratch-flash#838
    See issues for test cases

[33mcommit 1e551ac79223cf790b4aca33822fe031f2e7c4ab[m
Merge: ac39ed3 02c67db
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jul 8 13:13:45 2015 -0600

    Merge pull request #841 from LLK/fix-color-touching
    
    Bring back texture filtering workaround

[33mcommit 02c67db4d69b58d8761c26ba2ed144ead799853e[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Jul 8 11:50:03 2015 -0700

    Bring back texture filtering workaround
    
    The recent 3D refactor broke the `forcePixelate` flag, which used to
    force the pixelate effect on under certain conditions. Using the
    "touching color _?" block with thin lines depended on this feature:
    using linear filtering often causes the thin line to be blended too much
    with surrounding elements, resulting in failed detection.
    
    This change is similar in spirit to the `forcePixelate` flag from
    before, but uses texture filtering instead of the pixelate effect. This
    should result in improved performance when the pixelate effect is not in
    use.
    
    This fixes LLK/scratch-flash#836

[33mcommit ac39ed3b4a883bfb40e4f9863db1462fb2425c8f[m
Merge: 26d9882 5ba19be
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Jul 6 15:49:41 2015 -0600

    Merge pull request #834 from LLK/url-override-protocols
    
    Override protocols in URL overrides

[33mcommit 26d988209690846b9735c23b877a208e42f31206[m
Merge: 9fb9a69 f9e9a31
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Mon Jul 6 14:43:38 2015 -0700

    Merge pull request #833 from LLK/rollback_sound_refactor
    
    Revert sound refactor

[33mcommit 5ba19beb5711595eb5844423628119d3cc371d42[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Jul 6 14:38:29 2015 -0700

    Override protocols in URL overrides
    
    If the SWF is loaded over HTTP or HTTPS then overrideURLs will replace
    the protocol specified by the incoming URLs with a protocol matching the
    SWF's URL. If the SWF was not loaded over HTTP or HTTPS then
    overrideURLs will not modify the incoming URLs.
    This is effectively the same behavior that the online editor used before
    the ScratchX merge.

[33mcommit f9e9a3164699edadbb59672ef0e96f76b601416a[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Jul 6 15:26:14 2015 -0600

    Revert sound refactor

[33mcommit 9fb9a69e73cf3e104eaf760c1b11456ecf6a2bd7[m
Merge: 62febe9 555643c
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu Jul 2 10:59:01 2015 -0700

    Merge pull request #828 from LLK/use_native_sound
    
    Convert sounds to native Flash Sound objects and use them for playback.

[33mcommit 555643cd943e124427187b14cc1104bf50a01248[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Jul 2 11:58:13 2015 -0600

    Now logging wave decoding exceptions

[33mcommit bd941700bda05e1b8f5a4527717b2ea60a68aef9[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Jul 2 11:47:38 2015 -0600

    Added backwards compatibility for earlier Flash versions.

[33mcommit 3fcb0fa623b785eedbefda6ec6b4d59aea162785[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Jul 2 11:04:22 2015 -0600

    Convert sounds to native Flash Sound objects and use them for playback.

[33mcommit 62febe97450074eafcac46e6f506ddb5dd412653[m
Merge: 7fe5eef 45809d5
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Jul 2 11:06:43 2015 -0600

    Merge branch 'master' of github.com:LLK/scratch-flash

[33mcommit 7fe5eefd9ef8642f9217960a8dfb01c27e637757[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Jul 2 11:06:38 2015 -0600

    Bumped to v438

[33mcommit 45809d554dd8b1d7127ea4b008db7ddacd3c2638[m
Merge: faebeb0 3340cad
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu Jul 2 10:05:37 2015 -0700

    Merge pull request #827 from LLK/microworlds
    
    Microworlds

[33mcommit 3340cad7641ee46c638be20f99ddeb4058ea27e2[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Jul 2 10:04:19 2015 -0600

    default to non-microworld mode and enable it via flashvar

[33mcommit f54ed8bdf43781d026375a4d52cfdafd6bfd24a9[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Jul 2 09:58:09 2015 -0600

    Added flag for microworld mode and adjusted layout

[33mcommit faebeb012d19b65bb6d49c5802eb2f6af08362d5[m
Merge: a3dd412 d18f5b1
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu Jul 2 09:00:11 2015 -0700

    Merge pull request #826 from LLK/make_server_more_flexible
    
    Added a method for setting default urls that can be overridden.

[33mcommit a3dd412acafd7406270247b23a4120491d3ef1fa[m
Merge: 18fbb04 7f0a10f
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu Jul 2 00:01:59 2015 -0600

    Merge pull request #820 from LLK/expose-savePhotoAsCostume
    
    Expose savePhotoAsCostume() to allow override

[33mcommit 18fbb046763e6434b5025d2c52815cb600e0df4a[m
Merge: bf0435c 22bd51f
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu Jul 2 00:00:44 2015 -0600

    Merge pull request #824 from LLK/fix-logo-positioning
    
    Fix logo positioning

[33mcommit d18f5b144f584c66d34a51b1383b7b6a0823fc3a[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed Jul 1 23:57:08 2015 -0600

    Added a method for setting default urls that can be overridden.

[33mcommit bf0435c69e8876e080edddf500e715d02f44578d[m
Merge: d2eb0b2 017ef51
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Wed Jul 1 14:35:00 2015 -0700

    Merge pull request #822 from LLK/fix_slow_rotation
    
    Calculate MD5 if it's null

[33mcommit 22bd51f210902a302b170009a525fe62fccb6b8f[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Jul 1 14:27:46 2015 -0700

    Split downloadThumbnail() into overridable parts

[33mcommit ff1dc318733517dc0a1c6b9eb711da54075a8967[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Jul 1 12:23:06 2015 -0700

    Fix compiling for Air 2.6

[33mcommit 3482b40801ec046acf0a359283f0068ba06db122[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Jul 1 11:16:15 2015 -0700

    Fix logo position problems from ScratchX merge

[33mcommit d2eb0b266e2582a3a995f1e1e8edf94e961dd6ff[m
Merge: c105f6e 6d2ad4c
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jul 1 10:47:43 2015 -0600

    Merge pull request #792 from LLK/fix-large-backdrops-more
    
    Honor resolution setting if present in JSON

[33mcommit c105f6e043c0d60eb2ce11590108acca05f93d09[m
Merge: 4f5de13 e894564
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jun 30 17:49:37 2015 -0600

    Merge pull request #823 from LLK/scratchx-callserver-merge
    
    Merged ServerOnline.callServer() features upward

[33mcommit e8945644fae0d29f2e5a71395de3cb4d984fcdab[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jun 30 16:18:33 2015 -0700

    Merged ServerOnline.callServer() features upward
    
    These are remnants from the ScratchX merge.
    - We now try to reload crossdomain.xml in the event of a security error.
    - During a whenDone(null) call which is reporting an error,
      Server.callServerErrorInfo contains information about the attempt.

[33mcommit 4f5de1351f039f21e0aba676ee835b4d0cae9225[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jun 30 15:34:03 2015 -0700

    Allow tightly packed methods

[33mcommit 7f0a10fe425ac5ae47dfd312f57fde19313acfb9[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Jun 29 15:12:36 2015 -0700

    Formatting

[33mcommit 9a060c64bbdd397990185c568b69a9f0cb2ae648[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jun 30 15:08:56 2015 -0700

    More code style settings

[33mcommit 017ef51df61b67e717b01b51a0d5272d84112524[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Jun 30 15:18:02 2015 -0600

    Calculate MD5 if it's null

[33mcommit d0a7c286c368a974e92771f7f196678dffe62197[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jun 30 14:04:28 2015 -0700

    Add project code style

[33mcommit 707ffadbf0190ed335590e08b30d698b9942f1d7[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jun 30 14:03:53 2015 -0700

    Ignore IDEA's uiDesigner.xml

[33mcommit b43e54469c6c45d315b04e56626c66bc52a316c5[m
Merge: b03f6e1 b19b87a
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jun 30 12:42:08 2015 -0600

    Merge pull request #821 from LLK/3d-cleanup
    
    3d cleanup

[33mcommit b19b87adda1e804390692f98d17f81b9dd15b11c[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jun 30 11:05:37 2015 -0700

    Set blend factors less often
    
    During a normal render all sprites always use the same blend mode, so
    there's no need to set the blend factors for each sprite.

[33mcommit b03f6e1876c18365f30f96fa5a776ec41921468f[m
Merge: 15c8bd0 6bf9cc4
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jun 30 10:55:06 2015 -0600

    Merge pull request #818 from LLK/scratchx-v437
    
    ScratchX

[33mcommit 15c8bd0680b18d88b4094c676d7371f3ce412692[m
Merge: 649c03a f018d86
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Tue Jun 30 09:40:23 2015 -0700

    Merge pull request #780 from LLK/fix_str_comp
    
    Avoid AS3 class properties when caching lower case strings

[33mcommit 649c03a4c3e62de2166bfccb12ab2fcd1be9f425[m
Merge: 6bd926c ddb0ad6
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Tue Jun 30 09:22:14 2015 -0700

    Merge pull request #799 from LLK/fail_empty_imgs
    
    Don't try to decode zero length ByteArrays.

[33mcommit de7491519facde51d6ebaff682a64eb21b582f94[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jun 30 09:13:06 2015 -0700

    Bring back blend argument for drawChild()
    
    I had removed the argument since pre-multiplied alpha lets us use the
    same blend mode for both stamps and normal drawing, making for simpler
    code. However, blending is cheaper when the destination factor is zero.
    With that in mind it may be a better idea to turn off blending when we
    can, especially on mobile platforms.

[33mcommit 96c7f5660f858f7a69c57f86844d3e7611fa3324[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jun 30 09:02:39 2015 -0700

    Disable Context3D error checking

[33mcommit 6bd926c445600ddd6d2dc850b275f4bc71d13bb0[m
Merge: 4a43db4 101b299
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jun 30 09:50:21 2015 -0600

    Merge pull request #817 from LLK/fix-issue-769
    
    Fix issue 769

[33mcommit 4a43db4b72d30c7c6c02a2489bd096234829527f[m
Merge: d083bf6 1ed0172
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jun 30 09:36:27 2015 -0600

    Merge pull request #814 from LLK/fix-issue-788
    
    Fix issue 788

[33mcommit 101b29944e86426384ecbed3cef8ae37554db29e[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Jun 25 21:51:53 2015 -0700

    Don't dupe shaders for stamping; always use PMA.
    
    By setting the blend factors to (One,OneMinusSourceAlpha) at all times
    we can use the same set of shaders both for rendering individual
    costumes to bitmap and for rendering costumes on the stage. This
    requires using pre-multiplied alpha (PMA) in the shader output, but that
    only costs one instruction. In exchange we get correct blending for
    pen-layer stamps and we never need to change blending modes for any
    reason.

[33mcommit 6b81187863ae8375ac3238de36103932d6265965[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Jun 25 16:10:21 2015 -0700

    Fixed blending when stamping on the pen layer
    
    This is a fairly expensive fix, which involves having a separate
    "stamping" version for potentially each shader. It should be possible to
    handle this more universally, but this works as a first draft.

[33mcommit 18b20c05b0d24e6219f705c5e3bbbaf2d828a6db[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Jun 25 16:09:13 2015 -0700

    Shaved some instructions off the alpha de-multiply

[33mcommit 8f531391495887364c92563f0aa0e06637d57e42[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jun 23 17:15:42 2015 -0700

    Fixed scaling and occasional white border
    
    This should be tested on iOS, but seems to be reliable on desktop for
    both editor and presentation views.

[33mcommit 1ed0172d928132a7d6e321a5e58b3d1db875f164[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jun 23 12:25:08 2015 -0700

    Fix exception when clearing FX on video image
    
    Fixes #788

[33mcommit d083bf64adbc0d37dbbca0401ba4c825fdc6b128[m
Merge: 552db83 319fb53
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jun 30 09:25:45 2015 -0600

    Merge pull request #813 from LLK/3d_refactor
    
    3d refactor

[33mcommit fa74647014e3f15332d925a7d9a5bea98795ceef[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Jun 29 15:10:08 2015 -0700

    Expose savePhotoAsCostume() to allow override

[33mcommit 6bf9cc4b60d0c577fc1514d97ceca5090b1d1215[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Jun 29 13:38:43 2015 -0700

    Don't try to use right/middle click on Flash 10.2

[33mcommit a623441a48e9786eacfc34bd625c98478a781ded[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Jun 29 13:16:26 2015 -0700

    Fixed build.xml by adding as3corelib.swc

[33mcommit c481b30465913a2aecbd1f64ec7f1e0d96763026[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Jun 29 13:13:56 2015 -0700

    Fixed tests/build.js by adding as3corelib.swc

[33mcommit 31589f10004a2ee8381105cd20cdeeb6e0708deb[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Jun 29 13:13:14 2015 -0700

    Fixed bad merge related to Scratch.loadSingleFile

[33mcommit 899ab91dc06a17613c4bf2c358ee02ca12ba6f11[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Jun 8 14:06:08 2015 -0700

    Improved ScratchX logo

[33mcommit 6d68a3a0db2c4393f943e118387d163ba5d85bd5[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed May 20 08:48:45 2015 -0700

    Fixed getAsset() URL construction

[33mcommit 4e21983e61605095973b41725ba562725007f452[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue May 19 16:58:39 2015 -0700

    Merged ServerWeb into Server
    
    Merged ServerWeb's callServer() method into Server's fetchAsset() and
    improved error reporting in the process. Error handling may be altered
    by extending Server. Calls to fetchAsset() have been replaces with calls
    to serverGet(), which is what Online called that function.

[33mcommit 901ebaa13fdeb258b76b99c5d070631e3d097a8b[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon May 18 17:37:48 2015 -0700

    New class ServerWeb extends Server for web use
    
    For now ServerWeb contains the minimum necessary to support fetching the
    media library and its thumbnails over HTTP. This includes URL overrides.

[33mcommit d12187be253edecc68cb44f1454efc6340ff7837[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed May 13 18:30:03 2015 -0400

    Un-change CreateNewProject signature for Online compat

[33mcommit b49938fd6336c684ce6910858118d144587d62cb[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed May 13 18:05:25 2015 -0400

    ExtensionManagerOnline compatibility

[33mcommit 6a9846dff2e57ec3581feb147a9b82277c29c0d9[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue May 12 16:30:54 2015 -0400

    Send callback from save->export only on save

[33mcommit 39ece7b618417e79822155e79d9c38901161db7a[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue May 12 15:49:47 2015 -0400

    JS can ask for a callback in AScreateNewProject()

[33mcommit 09c96fa6dad525e5acf99a7ac1ad2d8ab9bc8e0f[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon May 11 15:43:21 2015 -0400

    Fixed enabling saved extensions

[33mcommit 63ac9c923d90ea7d22880d38e113056064a3d964[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon May 11 11:01:36 2015 -0400

    Added AScreateNewProject

[33mcommit 2c321c8c5ac7a567b8b24df7bf8eb6a98103fb77[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon May 11 10:59:48 2015 -0400

    Unescape URLs coming into loadGithubURL()

[33mcommit 0df624d1e8ec7d4d42e235404d9f3182de3e911a[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Sun May 10 18:55:19 2015 -0700

    Delay url=JS load until after SBX load finishes

[33mcommit 100249b483eb8ae59481003c1e24f3dd731e381d[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri May 8 17:23:15 2015 -0700

    loadGithubURL handles arrays, shows warning

[33mcommit 227a4a401e9d78446342c85459cd23e03d1797af[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri May 8 16:58:44 2015 -0700

    Made ScratchX logo a little bit better
    
    This should be replaced by one that's designed to be tiny

[33mcommit eb7fc3ff59251417b1c05f7fc11fa376f57698b8[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri May 8 16:50:47 2015 -0700

    Added top-bar elements for ScratchX
    
    The top bar now shows the experimental extension(s) that you have
    loaded, if any, as well as either a save or load button depending on
    your state.

[33mcommit b6bf7b0db5428aa551b107d78e6afd8edaac7619[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri May 8 15:14:28 2015 -0700

    Save as .SBX if experimental extensions are present

[33mcommit 13e5f44edfaaff46e8796aa70ec62440aa560a10[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu May 7 23:03:12 2015 -0700

    Added shift/right click to connect to a local ext

[33mcommit 65ccabbdb26a61ef1ef0252d814b3136aacb0ebe[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu May 7 22:11:34 2015 -0700

    Added ScratchX logo button

[33mcommit 21d0fafd47f3655f5b628531283d8257cc5050f0[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu May 7 20:19:02 2015 -0700

    Default to More Blocks category on ScratchX

[33mcommit 798416933f9c4a2600e4567a6967481e0fd84262[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu May 7 20:08:07 2015 -0700

    Let user call up the load/link/sample dialogs
    
    JS can now call ASsetModalOverlay(true/false) to enable or disable an
    overlay that will block input from getting to the editor. This overlay
    is automatically enabled before the editor calls JSshowExtensionDialog()

[33mcommit da3766fda8f4d95e891677c88eb3b81af61c7185[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu May 7 17:01:02 2015 -0700

    Removed unnecessary imports in ExtensionDevManager
    
    One of these imports was causing a compile error

[33mcommit 2f55a277f88f3236fcc2554a3fb552abe37994ee[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu May 7 16:54:35 2015 -0700

    Adapted existing extension dev system for ScratchX

[33mcommit 921af028a1405ffe4e90846be1a435ef4a9f7919[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu May 7 16:37:54 2015 -0700

    Handle JS URLs coming into loadGithubURL()

[33mcommit d35b1c9742ad3dafb8bd5a6919cc0c9632e66b7b[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu May 7 10:44:08 2015 -0700

    Copied ExtensionDevManager.as from Online
    
    This is currently just a copy of ExtensionManagerOnline.as and will not
    compile as-is. It's just here for the sake of diffing against its next
    revision.

[33mcommit 82e1929cb0e1c8c8160046392d707247687c9405[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed May 6 17:07:52 2015 -0700

    Updated project extension loading for ScratchX
    
    Experimental JS extensions are only supported on ScratchX, and must be
    hosted on GitHub Pages. Each reason the SWF might have for refusing a
    project extension now reports a unique error message.

[33mcommit 4a6a295e93fe105864241baf7e9ab2aec5345dc3[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed May 6 17:06:55 2015 -0700

    Rename ASloadSBXFromURL to ASloadGithubURL

[33mcommit 97bbfeabc08146c1e49d543df51d39103833f284[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue May 5 19:03:43 2015 -0700

    Changed colors for ScratchX based on Carl's design

[33mcommit aa32ea29a49bc4442777318fb9d322a6d58bfbd2[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue May 5 16:05:48 2015 -0700

    Allow loading an SBX from JS-supplied Base64

[33mcommit 1c245271b1d4a77242fc56fb7cd5dd513214cd95[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon May 4 18:15:26 2015 -0700

    Let IDEA clean up project files

[33mcommit 97c7058df39cbda98431b019406856c2c0127020[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon May 4 18:13:34 2015 -0700

    Added JS->SWF call ASbrowseForSBX
    
    Also added '.sbx' filter to File->Open dialog when in ScratchX mode.

[33mcommit 2fe493fbb5be295f726834be9d81c43c05d115ae[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Mar 26 13:31:02 2015 -0700

    Support loading a project through the URL

[33mcommit 19ff1706f10c726bb2283301bdc9986f2f2b5af2[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Mar 25 13:54:54 2015 -0700

    Use externalCall to call jsEditorReady()

[33mcommit e855ac2a512fbc5e60ab92b928b984b2968b5668[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Mar 24 00:32:10 2015 -0700

    Fixed loading extensions on ScratchX prototype
    
    Also removed no-longer-necessary stub JS callbacks

[33mcommit c2345cb90473343e42cda92cd34b1f232366c977[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Mar 23 14:24:11 2015 -0700

    Fixed extension dev mode detection

[33mcommit e8ada2c366812f3381149a63ce30fa1546fe9714[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Mar 20 10:48:27 2015 -0700

    Moved basic extension support into scratch-flash

[33mcommit c0b613b6878a0559671e4f7f3669b292f3bdaf31[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Mar 19 16:40:11 2015 -0700

    Created IDEA project, plus some cleanup

[33mcommit 319fb53b6131cf2b35799b9ce9c286472ec83447[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jun 23 12:22:52 2015 -0700

    Simpler updateFilters() and checks for disabled FX

[33mcommit 47583cedd6324f8af6b4e8cd5758836c11ce13de[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jun 23 11:57:52 2015 -0700

    Removed IRenderIn3D

[33mcommit 9a866f48c002fb12780b187f14e0658ba7a9c013[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Jun 22 16:39:17 2015 -0700

    Autoformat DisplayObjectContainerIn3D.as

[33mcommit 6b7502bdf33591ae38639414a6247ecbe06552c2[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Jun 19 14:50:18 2015 -0700

    Fully collapsed the matrix math in setMatrix()

[33mcommit dd216f7902a609caeece171718723f5690f4ee32[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Jun 19 12:22:22 2015 -0700

    Precompose the first 4 matrix ops in setMatrix()

[33mcommit 664b934f6f21427946660088ddd2ebf33b7027a5[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Jun 19 11:46:01 2015 -0700

    Fixed math in setEffectConstants()

[33mcommit 91870408ef7640a18f53a39f5e03e31c963bb931[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Jun 19 11:34:33 2015 -0700

    Set texture, blend, and shader values less often
    
    Code from @sclements

[33mcommit 1c3b5a4f012d7ff05ffeddc774d56135d54d2a19[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Jun 19 11:28:10 2015 -0700

    Break up drawChild into separate functions
    
    This improves our ability to benchmark individual parts

[33mcommit 80dd6c457dfbee20ce344b79e7312cf25fe4d89c[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Jun 18 14:10:11 2015 -0700

    Fix shader ID calculation

[33mcommit 1c02b9fb0e3afa6cc9c7062a417693fe6c913053[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Jun 18 12:42:54 2015 -0700

    Lazy shader ID calculation
    
    Wipe out a sprite's shader ID when its effects change, and recalculate
    the ID at draw time only if it's not present.

[33mcommit ba9177f7519b5b902f76b93ed0ed509a5425bef4[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Jun 18 12:27:04 2015 -0700

    Don't create a closure in updateFilters()

[33mcommit b7e78ccefbd9b1605c755b2b9226450aa220d4b2[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Jun 18 11:23:22 2015 -0700

    Minimize work in switchShaders()
    
    Calculate shader ID at effect change time, so that the per-quad work at
    render time is as small as possible.

[33mcommit 552db83d0155115c9c6f25476c4201aef37bcdf9[m
Author: Colby Gutierrez-Kraybill <colby@kraybill.com>
Date:   Tue Jun 16 16:39:50 2015 -0400

    change format for slack

[33mcommit 044639993313e78e0cddff94a1f683b27069ff9c[m
Author: Colby Gutierrez-Kraybill <colby@kraybill.com>
Date:   Tue Jun 16 16:03:24 2015 -0400

    Adding slack integration

[33mcommit 5cf068090c7014af1d8809c48a8cb85b9b720547[m
Merge: 3ec5460 554d39c
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jun 16 09:26:59 2015 -0600

    Merge pull request #804 from togazo/patch-1
    
    Update Primitives.as

[33mcommit 554d39ce16d0aa4ed94686901729318664e27f19[m
Author: togazo <tga.togao@gmail.com>
Date:   Tue Jun 16 11:01:11 2015 +0900

    Update Primitives.as
    
    for example... when n=14 (etc.),
    'Math.pow(10, n)' is '100000000000000',
    but
    'Math.exp(n * Math.LN10))' was '100000000000000.13'...

[33mcommit 79afbf4c73921a57ec1ebb66e2fa31ec36cdc491[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Jun 15 08:59:07 2015 -0700

    Fixed warning and removed obsolete comment

[33mcommit c250e4ee2026229bf55fc10a5313f11f6fdbf9b2[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Jun 12 18:11:39 2015 -0700

    Fixed picking up sprites in 3D

[33mcommit 84bdfdf52d7ee545a4cbba3b1a1746fd2680f6fe[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Jun 12 10:27:57 2015 -0700

    Fixed Mosaic when Pixelate off, moved math inward
    
    Some calculations were being done even when the currently-enabled
    effects did not need the results, so those have been moved closer to the
    code that uses the values. A previous similar change was too aggressive
    and broke the Mosaic effect unless Pixelate was also enabled; that has
    been fixed.

[33mcommit 5a081c0207164eaec6415229a406ab0e4d84c689[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Jun 11 20:21:05 2015 -0700

    Simpler buffer setup and fragment constant setup

[33mcommit c862eebcd4d3d728db73d4920b6a365ed9f9ef22[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Jun 11 19:57:25 2015 -0700

    Eliminate unnecessary shader switch
    
    Also set the shader before its parameters.

[33mcommit 8b73fbf1364f415b6b17884352c9af47e46378ae[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Jun 11 19:40:02 2015 -0700

    Prefill effect list with zeroes
    
    This means code that checks a sprite's effect values can assume the
    values are always numerical, rather than checking for `undefined`. This
    fixes sprites disappearing after pressing the Stop button.

[33mcommit ddb0ad683acbba44fb393f0794593a4edff8b0e9[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Jun 11 16:52:35 2015 -0600

    Added null check

[33mcommit a9caf2cb0bc2053d47c806f7760df6815d1fe22e[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Jun 11 16:49:23 2015 -0600

    Don't try to decode zero length ByteArrays.

[33mcommit 9abdd071cdc13e8c97b95df41b7fab451ec9918e[m
Author: TheLogFather <adrian@Administrators-MacBook-Pro.local>
Date:   Thu Jun 11 13:59:36 2015 +0100

    Adds new item "go to definition" for drop-down menus of custom block callers.

[33mcommit e470503d84dfe66defa42a2a33cfd2fcbb9337f8[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Jun 10 15:34:33 2015 -0700

    Corrected sprite position

[33mcommit 7a788407425d7afb55b549d3e1f405c581d6438e[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Jun 10 15:29:46 2015 -0700

    Prevent AGALMacroAssembler from assuming FC4.yzw=0
    
    Setting FC4.yzw to silly values in the alias prevents AGALMacroAssembler
    from using any of those registers when it wants to provide a zero
    somewhere in the code. This lets us use FC4.x as a fixed constant while
    making FC4.yzw available for effect values.

[33mcommit a4f87024c4583ed0463465f855a2b61c13bd561f[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Mar 31 15:35:34 2015 -0600

    More GC optimizations

[33mcommit be37a68f7bcd4349c493ac6be96a672d1fd43fb0[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Mar 17 21:21:42 2015 -0600

    Fixed color effect when brightness effect is zero.

[33mcommit e50625ff70afcefbb55554375558e8f1c444eb31[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Mar 17 16:24:35 2015 -0600

    Now switching shaders per Sprite if necessary

[33mcommit cc3f78bd92827bd6c250cf328757caf146aaf5e4[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Mar 17 12:34:26 2015 -0600

    Removed all of the large memory allocations. Fixed the effect register assignment.

[33mcommit 46596effd9dbd2938083c01f323911ccac611087[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Mar 13 09:19:04 2015 -0600

    Reducing vertex buffer transfers in favor of using shader constants to pass effect data.

[33mcommit 6d2ad4c45636aefd68508e317c2140f8bf9552ac[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Jun 5 11:48:01 2015 -0700

    Honor resolution setting if present in JSON
    
    The backdrop JSON can optionally specify the bitmap resolution to use
    for a given backdrop. Previously this setting ws ignored on backdrops
    and would even prevent the detection of a high-resolution backdrop. Now
    it is honored if present, and if absent then the automatic resolution
    detection still works.

[33mcommit 3ec5460798e7e11069b4a360e1bdf36ebb730f9e[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri May 29 07:37:31 2015 -0600

    version 437

[33mcommit f018d86ebf7df5787f351e519a83079077a22899[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu May 28 21:17:53 2015 -0600

    Now only altering String values. Optimized.

[33mcommit 65adc06cfd2c1f5bb1ef292f6a7978ee8a667134[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu May 28 18:55:48 2015 -0600

    Avoid AS3 class properties when using the Dictionary to cache lower case strings

[33mcommit be5fff1fa5d3c26428145d75c84f244d97f69301[m
Merge: 47d8a8a a794f8d
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu May 28 09:22:15 2015 -0700

    Merge pull request #753 from cpseager/fix_delete_internal_extensions
    
    Do not permanently delete internal extensions

[33mcommit 47d8a8ad41daedacc505e4bf22aa81363cdf872a[m
Merge: 4856b77 7c52627
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu May 28 10:17:27 2015 -0600

    Merge pull request #754 from cpseager/move_extension_LED
    
    Move extension LED left

[33mcommit 4856b775b5afc4f8ad02dd8d2270e37896298d96[m
Merge: 246b529 eb8980e
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Tue May 26 15:16:13 2015 -0700

    Merge pull request #774 from LLK/better_ieee_support
    
    Added mono and double precision support.

[33mcommit eb8980e71db05398af519ae5549ddcc4c9261666[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue May 26 13:03:46 2015 -0600

    Added mono and double precision support.

[33mcommit 246b5293e99cc3c701d89738cb36d0066e6e9ec6[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue May 26 10:44:57 2015 -0600

    Bumped to version 436.1

[33mcommit 7a990de9db10bbc91f966276bcf8ada2612a5ec4[m
Merge: b0e8d94 7aef625
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu May 21 21:53:19 2015 -0700

    Merge pull request #768 from LLK/IEEE_WAV_decoding
    
    IEEE WAV audio file decoding

[33mcommit 7aef625a0fab585da8b264392a445020c6377496[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu May 21 22:50:17 2015 -0600

    Tweaked the floating point conversion for WAV files

[33mcommit b0e8d9457e8c67dd2be5c4c23811d2b5b9ed6516[m
Merge: c32f3b8 ac21495
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu May 21 08:32:25 2015 -0700

    Merge pull request #732 from AndersBillLinden/issue727
    
    Fixing issue 727

[33mcommit be0c0304ac4cf66e2aad9c2221c8ce3b08f8a1bb[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue May 19 23:56:14 2015 -0600

    Removed unused channels property

[33mcommit 988d2b203d8ceb7e2ad55c0628ad16897f71a09e[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue May 19 23:52:37 2015 -0600

    Now converting floating point samples ourselves.

[33mcommit 5ccb92f8d71af763d8ee7d9d0303aedacd761d43[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue May 19 22:54:22 2015 -0600

    Trying to workaround the bug in loadPCMFromByteArray

[33mcommit ce8a90d004753595c3bbd6a3260ee0513816318d[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue May 19 22:16:57 2015 -0600

    Attempting to use loadPCMFromByteArray() but the sound has zero length.

[33mcommit b90b838eecfd0a108414d38885ff6566d12ba620[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue May 19 19:27:50 2015 -0600

    A little code to investigate (begin implementing?) support for WAV files that can't be imported.

[33mcommit c32f3b82ad0b9744541cf32b277b98ba1a84566a[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed May 13 15:25:53 2015 -0400

    v436

[33mcommit 17b00b224a433742538771d00e1248d8882372d4[m
Merge: 7577b91 f80002a
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Wed May 13 14:09:52 2015 -0400

    Merge pull request #761 from LLK/fix_3d_exception
    
    Always check the buffers when rendering an individual child.

[33mcommit f80002a10f7fa71b667b7e87e91eb0e37aa6908f[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue May 12 15:59:50 2015 -0400

    Always check the buffers when rendering an individual child.

[33mcommit 7577b910fb7895ea31f7e1666d8ac4cacfd3fee0[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri May 8 13:11:36 2015 -0600

    Bumped version to 435.3

[33mcommit 7c52627444245ab63c0210cc545bb7bbd2e54f72[m
Author: scraxe <cpseager@users.noreply.github.com>
Date:   Thu May 7 22:26:13 2015 +0100

    Move extension LED left
    
    Shift extension LED left so not partly obscured by vertical scrollbar with extensions with many commands.

[33mcommit a794f8d6b08f21a4e904accb9d42d9161177cf2c[m
Author: scraxe <cpseager@users.noreply.github.com>
Date:   Thu May 7 22:06:17 2015 +0100

    Do not permanently delete internal extensions
    
    Internal extensions should only hide/show blocks, not be permanently deleted, as this stops add-remove-add of that extension from working.

[33mcommit b978ae201636f85a85b3a32c88c1596ff9e4c091[m
Merge: a97973c c82a035
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu May 7 13:58:06 2015 -0700

    Merge pull request #752 from LLK/fix_wedo
    
    Call resetPlugin before installing project or loading extensions.

[33mcommit c82a035d8cc0e2744c4eb153ac8ce01263ea6d87[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu May 7 14:23:37 2015 -0600

    Call resetPlugin before installing project or loading extensions.

[33mcommit ac214954c3add0050e2a63a3bb9cd9fd6110f6c7[m
Author: AndersBillLinden <anderslinden@bredband.net>
Date:   Fri May 1 15:11:25 2015 +0200

    Moving up inner functions of ScriptsPane.updateFeedbackFor().

[33mcommit 1be8f5cdc444b05af93c2da64c6af48b51b2948e[m
Author: AndersBillLinden <anderslinden@bredband.net>
Date:   Sun Apr 19 14:24:28 2015 +0200

    When dragging a block from the scripts palette to the scripts panel, insertion/wrapping previews will only occur when the mouse is inside the scripts panel.

[33mcommit c9c18882dc7a33ccd78f0aa975c6393fe31e3140[m
Author: AndersBillLinden <anderslinden@bredband.net>
Date:   Tue Apr 7 21:04:46 2015 +0200

    Removing getters Block.isBroadcastSender and Block.isBroadcastReceiver, instead checking the value of Block.op.

[33mcommit 749554136899f6faf330a41b35a3675654161427[m
Author: AndersBillLinden <anderslinden@bredband.net>
Date:   Sun Mar 1 15:32:41 2015 +0100

    Renaming broadcasts (using right click menu)

[33mcommit 606889827a54a4a782a7cdd148e4d0b8dc78313c[m
Author: AndersBillLinden <anderslinden@bredband.net>
Date:   Wed Apr 15 22:28:46 2015 +0200

    Aborting block drag operations by pressing ESC.

[33mcommit a97973c1a02a71ea63b8daa2ca6bc3d40fbc820b[m
Merge: cde0431 e51439d
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Tue May 5 10:49:25 2015 -0700

    Merge pull request #747 from LLK/fix_exc_pres
    
    Add null check and improve load handling

[33mcommit e51439da7704fd941792bdb2798de8926d809a63[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue May 5 10:59:05 2015 -0600

    Add null check and improve load handling

[33mcommit cde0431b45183257cf379656a6f57c54664ce917[m
Merge: 2c7c0fc 95df496
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu Apr 30 15:28:54 2015 -0400

    Merge pull request #743 from LLK/fix_null_stage
    
    Fix null stage refs in paint editor by adding a static var for the stage

[33mcommit 95df4967c74403dc2cb17e9e459654fd086bad1d[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Apr 30 11:58:00 2015 -0600

    Fix null stage refs in paint editor by adding a static var for the stage.

[33mcommit 2c7c0fce49bc82fe3a5d3765d15886c94ea62ba7[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Apr 28 14:14:21 2015 -0600

    Bumped to version 435.2

[33mcommit fe232f753d8c462b96e4b477b1f4480c5fcf5476[m
Merge: 8caf20d 2dffbe2
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Fri Apr 24 14:33:20 2015 -0400

    Merge pull request #740 from LLK/stop_dragging_while_loading
    
    Don't allow drags to start while a project is loading.

[33mcommit 2dffbe2e44d0b6b3323ee47173e62835715908ef[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Apr 24 12:21:32 2015 -0600

    Don't allow drags to start while a project is loading.

[33mcommit 8caf20d98027672d9f6a3ad927c78b096d433c52[m
Merge: c9bb191 cb1d5ec
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu Apr 23 12:55:11 2015 -0400

    Merge pull request #739 from LLK/remove_backpack_logic
    
    Removed logic for handling items from the backpack

[33mcommit cb1d5ec72a4ae851d132a6eec9af5ad89fedd580[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Apr 23 10:08:25 2015 -0600

    Removed logic for handling items from the backpack

[33mcommit c9bb191a68e2ece59ffd390468c731767ab3f55e[m
Merge: 07fd87d 9a0a733
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Apr 21 13:48:37 2015 -0600

    Merge pull request #736 from LLK/fix_pen_alpha
    
    Added support for pen alpha

[33mcommit 9a0a73345bfff36f16b0ea62d849ed46244faaac[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Apr 21 10:45:32 2015 -0600

    Now supporting pen alpha when the pen color format is ARGB and alpha is greater than zero.

[33mcommit 07fd87dc336f447951486188c276e68217a66a4b[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Apr 17 13:37:45 2015 -0700

    v435.1

[33mcommit a0be4e27766a243fcad6d8113f60cda529f1e6ac[m
Merge: fa70358 22d498b
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Mon Apr 13 11:49:01 2015 -0400

    Merge pull request #713 from LLK/fix_int_fix
    
    Added type check for random block

[33mcommit 22d498b8340e57ae402e5d67bbb44ada7d439f24[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Apr 13 09:42:42 2015 -0600

    Re-added support for generating integer random numbers when two reporters are the arguments to the random block and they both return integers.

[33mcommit 20718f1ce0b6aa8638d8a712644d3cd214015c13[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Apr 13 09:01:02 2015 -0600

    Added type check for random block

[33mcommit fa70358b006f2431d937823d3faa65c8c1801fce[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Apr 10 15:29:13 2015 -0400

    Bumped to v435

[33mcommit 43a9507153bc4638df2fd8145c8201a8de18636b[m
Merge: 86c1ffe 6bec3f1
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Tue Apr 7 17:39:25 2015 -0400

    Merge pull request #699 from LLK/fix_3d_video_trans
    
    Fix video transparency in 3D mode

[33mcommit 6bec3f19d31c5ca41a68fa474842a606fd3c9931[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Apr 7 17:30:13 2015 -0400

    Simplified ghost activation logic.

[33mcommit 86c1ffe7ecf6f71351356c5d174d5f92774bf8b4[m
Merge: d0fdaa1 565810a
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Apr 7 16:27:18 2015 -0400

    Merge pull request #702 from LLK/refactor-imagespart-scriptspart
    
    Refactor imagespart scriptspart

[33mcommit 565810a7d085522da6b0ff8b6b0504fc81606cb9[m
Author: Sayamindu Dasgupta <sayamindu@media.mit.edu>
Date:   Tue Apr 7 02:46:01 2015 +0000

    Make ScratchStage initialization overridable.

[33mcommit d0fdaa101f88c4c0d3bc956d94cc5c6733845db2[m
Merge: d364d76 9bec728
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Mon Apr 6 16:08:49 2015 -0400

    Merge pull request #698 from LLK/fix_integer_processing
    
    Fix integer processing

[33mcommit 9bec728860215cef384af9ab067143cc3557f4d7[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Apr 6 15:56:34 2015 -0400

    Removed old numeric value processing code.

[33mcommit 8f6d8c6bb5c441a14ba3b0af31cf7fb76da546c5[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Apr 6 15:30:45 2015 -0400

    Fixed faulty INTEGER logic / Scratch definition.

[33mcommit c76111a13dc4bbcb9bcad5c2ed0b4a95bdfc95a6[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Apr 6 15:02:21 2015 -0400

    Fixed logic for requesting random integers.

[33mcommit fc96cb9c0aa07c6e0618062a9be034220f02adfd[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Apr 6 14:57:42 2015 -0400

    Removed redundant check. Fixed NaN handling.

[33mcommit 5965e4b4e6c9071c2538e333ea6ca6157a32e8e5[m
Author: Sayamindu Dasgupta <sayamindu@media.mit.edu>
Date:   Mon Apr 6 02:42:49 2015 +0000

    Refactor ImagesPart and ScriptsPart.
    
    This makes it easier to inherit from these classes in derivatives.

[33mcommit d364d76bda9dff2883695fd0846e9deefb551ba9[m
Merge: 3218bcd 0f2a41b
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Sun Apr 5 17:05:57 2015 -0600

    Merge pull request #618 from AndersBillLinden/only-one-filefilter
    
    Only have one FileFilter containing both suffixes (.sb and .sb2)

[33mcommit aad2dc53d5683c6f0f423a6c7dd5c88bf97ac709[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Sun Apr 5 17:00:20 2015 -0600

    Fix video transparency in 3D mode

[33mcommit f28ab601701d6c15794400a55b50e116a7fc99c5[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Sun Apr 5 16:40:41 2015 -0600

    Fix integer processing

[33mcommit 3218bcd5f83f071d862d18b8ff65e3fd056b1169[m
Merge: 9d3f509 51fafe4
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Fri Apr 3 15:57:22 2015 -0400

    Merge pull request #693 from LLK/fix_offscreen_centerbutton
    
    The top-right image editing buttons are now anchored.

[33mcommit 9d3f509893e0cf035cd20a0a08669d6a76a1aa6d[m
Merge: eee1236 a98552e
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Fri Apr 3 14:03:55 2015 -0400

    Merge pull request #690 from LLK/fix_large_backdrops
    
    Now detecting high resolution bitmap backdrops

[33mcommit 51fafe434bae43955209a167714f4fd876b39257[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Apr 3 11:53:38 2015 -0600

    The top-right image editing buttons are now anchored.

[33mcommit eee1236c93f8b39828e8d80a087f5dbf55b05177[m
Merge: 40cc5e1 a254a22
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Fri Apr 3 13:34:25 2015 -0400

    Merge pull request #692 from LLK/disable_crop_button
    
    Disabled crop button unless there is a selection in the bitmap editor.

[33mcommit a254a22b131c390534efe706c96e19962a4fe6b7[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Apr 3 11:29:37 2015 -0600

    Disabled crop button unless there is a selection in the bitmap editor.

[33mcommit 40cc5e1dbb42154977d615b5887359d6c486f876[m
Merge: bc13eb3 705f9e5
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Fri Apr 3 13:26:04 2015 -0400

    Merge pull request #691 from LLK/fix_pen_dots
    
    Fix pen touches

[33mcommit bc13eb3e66d73c25e34161a43f931d46215cc6c2[m
Merge: 1394d2b e7c22a6
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Fri Apr 3 13:15:44 2015 -0400

    Merge pull request #687 from LLK/3d_cleanup
    
    Removed unused methods in interface. Cleaned up and optimized stamping.

[33mcommit 705f9e50217f86b82e130c3862e83021d80d60f9[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Apr 3 10:55:23 2015 -0600

    When penDown is called, draw a tiny circle instead of a tiny diagonal line.

[33mcommit a98552ed74a8cf235ad414cf08bd95183ab464db[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Apr 3 10:36:51 2015 -0600

    Now detecting high resolution bitmap backdrops and setting the bitmapResolution.

[33mcommit e7c22a69b58af7014f3ccaa0dbb17984c6fa2d28[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Mar 31 22:09:08 2015 -0600

    Removed unused methods in interface. Cleaned up and optimized stamping.

[33mcommit 1394d2b746804125c2906a6ce8050a9ad207cab3[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Mar 31 16:53:02 2015 -0600

    Fix for #685. Fixed blend mode and clearing of filters before rendering.

[33mcommit f8b34989107ae89a7567d3df43f17d96a92e7fa8[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Mar 30 11:42:13 2015 -0700

    Remove translation metadata from translator map
    
    By convention, a PO file contains a metadata entry that uses the empty
    string as its key. Our translator was translating the empty string into
    this metadata. Now, that entry is removed on dictionary construction.

[33mcommit 8ee5300b8445404eda043e9eb8e9554afe3b8792[m
Merge: bbe2e04 6e12322
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Fri Mar 27 16:40:02 2015 -0400

    Merge pull request #681 from LLK/bug/621
    
    #621 Adding ? At the End Of List Contains Block

[33mcommit 6e12322d2e5fa71c298b367084a8dd0affdb3e16[m
Author: Randy Jou <randy@scratch.mit.edu>
Date:   Fri Mar 27 09:32:46 2015 -0400

    Adding ? as per issue 621

[33mcommit bbe2e046e45d2611adf5332135041cb61c1a4425[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Mar 17 08:24:49 2015 -0700

    v434

[33mcommit 6c29f9e66c49883cd8c3658e12ec1cfb643cffae[m
Merge: 76a32c4 2a5d282
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Mon Mar 16 16:19:51 2015 -0400

    Merge pull request #670 from LLK/optimize_hat_processing
    
    No longer creating closures with every call to startEdgeTriggeredHats.

[33mcommit 76a32c46294a57a40288277bc64205136bd5ec28[m
Merge: b612256 5da6fdd
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Fri Mar 13 15:25:11 2015 -0600

    Merge pull request #665 from ArturoCastellon/Issue_569_Sound_tab_jumping_after_selection
    
    Fix sound tab list jumping to top when selecting sound

[33mcommit 2a5d2828349606ac0327b631c1f2fe26147e121a[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Mar 13 12:17:38 2015 -0600

    No longer creating closures with every call to startEdgeTriggeredHats.

[33mcommit b61225601f410711372226b7896f6b9d4df95732[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Mar 11 16:14:23 2015 -0400

    v433a

[33mcommit 24159c77bc12e667b5bfd3ae871f927ba2e9cec9[m
Merge: 81ae4a0 51b2a1a
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Mar 11 15:19:22 2015 -0400

    Merge pull request #669 from LLK/fix_3d_issues_
    
    Fixed compile warnings.

[33mcommit 51b2a1a5ead94dc362508fffac7f54a51d3666f6[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed Mar 11 15:18:23 2015 -0400

    Fixed compile warnings.

[33mcommit 81ae4a07e2fd25b9ce229419bd4b18ff97785c36[m
Merge: b05bad7 76c3ee1
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Wed Mar 11 13:51:10 2015 -0400

    Merge pull request #666 from LLK/fix_3d_issues_
    
    Fix 3d issues

[33mcommit 76c3ee13e854bae76d63391ec3c5fcfc6a5fbdd7[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed Mar 11 13:07:37 2015 -0400

    Worked around an issue caused by adding an effect and hidding sprites in the same frame - the vertexData buffer wasn't big enough to upload the data.

[33mcommit 49e40f0175c0c125a2eacd15f3d62f487cf37d83[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed Mar 11 13:05:34 2015 -0400

    Fixed exception which occurs when a sprite is created and it is hidden (duplicating a hidden sprite).

[33mcommit 64d266406af3bd4ff255628db79dc078c5bc1414[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed Mar 11 13:04:06 2015 -0400

    Added missing null checks.

[33mcommit b05bad768188a6735bc51d85d7cd4a632529c1f9[m
Merge: 2fb7dfe 49fbec7
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Mar 11 11:31:41 2015 -0400

    Merge pull request #664 from LLK/fix-ASstartProject
    
    Prevent crashes in stopEvent() with a null check

[33mcommit 5da6fddc2772fd43a4cdc23485404d68cc206df6[m
Author: Arturo Castellon <turo61@gmail.com>
Date:   Tue Mar 10 23:18:42 2015 -0300

    Fix sound tab list jumping to top when selecting sound

[33mcommit 49fbec7df3c4f90f5359c0ff89ea5fe3866924ff[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Mar 10 13:26:15 2015 -0400

    Prevent crashes in stopEvent() with a null check

[33mcommit 2fb7dfe02e1e080e849e6dd40494a21815ba57a7[m
Merge: 68b73a1 92ec578
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Mar 10 13:06:21 2015 -0400

    Merge pull request #663 from LLK/fix_sound_typeerror
    
    Added null check for donefunction.

[33mcommit 92ec578a06d4d68fecf31dcaf41fc3e0614c2748[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Mar 10 11:48:24 2015 -0400

    Added null check for donefunction.

[33mcommit 68b73a1edd63f97439fa8061c76d006964c7183e[m
Merge: 323a952 b52eef8
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Fri Mar 6 12:52:22 2015 -0700

    Merge pull request #661 from LLK/fix_watchers_in_3d
    
    Now masking watchers properly in 3D

[33mcommit b52eef842f07cb42ec2b410b0eef269fa9368162[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Mar 6 12:21:40 2015 -0700

    Now masking watchers moved to the uiContainer just like they are in the normal ScratchStage.

[33mcommit 323a9528e4d855d3cf71755cabe1e031ce6880a4[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Mar 2 15:51:13 2015 -0800

    v433

[33mcommit d85ed7f3ebcb62c681e3b324b3bd89f31f647fe1[m
Merge: f9885de b1014ab
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu Feb 26 09:43:51 2015 -0800

    Merge pull request #652 from LLK/new_media_lib_ref
    
    Media library refactor

[33mcommit b1014ab1fd4ab28e16a6599bfef2c90b6d8861ed[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Feb 19 15:52:05 2015 -0700

    Added support for importing costume centers and bitmap resolutions from the media library.

[33mcommit 328654e17411cae43e83257e97294d144e6ff431[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Feb 19 12:22:21 2015 -0700

    Split media library into separate JSON files by type.

[33mcommit f9885de88083f34437b9427c6ae25d60be054b13[m
Merge: 57dadab 7f2fba1
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Tue Feb 24 13:05:37 2015 -0800

    Merge pull request #643 from LLK/fix_distance_nonexistent
    
    The distance to a non-existent sprite is now 10000 (was 0).

[33mcommit 7f2fba1bd07818cd39b86add5db9dbf00fcddc5c[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Feb 24 13:52:08 2015 -0700

    The distance to a non-existent sprite is now 10000 (was 0).

[33mcommit 57dadab245a7ea3564fd41c6fd8b21ce02418487[m
Merge: a251b6d d13974f
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Feb 24 09:41:08 2015 -0700

    Merge pull request #642 from LLK/convert-to-bitmap-crash-fix
    
    Convert to bitmap crash fix

[33mcommit d13974f75d352313993e3b90ed6ea806d45713b6[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Feb 24 08:25:04 2015 -0800

    Use Boolean for ignoreResize

[33mcommit 987fb64f4b7f2b6d45670e9e3c4e87be55f948b1[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Feb 23 18:28:19 2015 -0800

    Work around drawWithQuality absence in older Flash
    
    On older versions of Flash, manually suppress any resize events that may
    be generated by changing the stage quality.

[33mcommit e7e409feb402c3b5420fb06ee0f972be2210513c[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Feb 23 17:52:04 2015 -0800

    Use drawWithQuality, don't change stage quality
    
    Changing the stage quality sometimes triggers a resize event. If this
    happens while converting a costume from vector to bitmap the image
    editor is shut down in the middle of the conversion, causing a crash.
    
    I was unable to determine the reason that changing the stage quality
    sometimes fires a resize event and sometimes doesn't, but using
    drawWithQuality is probably more efficient anyway.

[33mcommit d577b67794ca1b88668e117279ee6b3d1b931536[m
Author: AndersBillLinden <anderslinden@bredband.net>
Date:   Mon Feb 23 20:45:18 2015 +0100

    When renaming a variable, the current name is proposed.

[33mcommit a251b6dab28da5e5ba2c2c428f06a1bee73a8b5c[m
Merge: a88da87 b07cd5d
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Fri Feb 20 12:30:38 2015 -0700

    Merge pull request #638 from LLK/crop-button
    
    Expose bitmap crop through a new button

[33mcommit b07cd5da891bac6c4b5e86c54eefa5306675eeed[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Feb 20 10:22:03 2015 -0800

    Expose bitmap crop through a new button

[33mcommit a88da87e7057b118087a054a21d4aee10713877a[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Feb 20 09:27:44 2015 -0800

    Remove actionjson due to license conflict
    
    This reverts commit 6ae4b816c62555c48445504d30f4949af6add129, reversing
    changes made to d53aaf3d21e66a2f672c723f4081758d00be677f.

[33mcommit 28fd5776a07b959763ca9bc30d3bf3d351df3db3[m
Merge: 83d391a 4d44214
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu Feb 19 12:47:36 2015 -0700

    Merge pull request #637 from LLK/note_trademark
    
    Add link to trademark policy

[33mcommit 4d4421494bd8e7e7ca7f817eee77020fbdc08d5e[m
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu Feb 19 12:46:43 2015 -0700

    Wording changes

[33mcommit c73f6e14459b3f52da87a63bc324d9ed862340d2[m
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu Feb 19 10:04:48 2015 -0700

    Add link to trademark policy

[33mcommit 83d391a87a7a309c7f8d8d48b11c9c561af061be[m
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu Feb 19 09:15:37 2015 -0700

    Removed warning about Context3D class in newer SDK versions

[33mcommit 6ae4b816c62555c48445504d30f4949af6add129[m
Merge: d53aaf3 d0477fa
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Feb 17 09:54:57 2015 -0700

    Merge pull request #630 from LLK/actionjson
    
    Use actionjson for JSON decoding

[33mcommit d0477faf4d261f9b8c6b1718a12dd81866d89c80[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Feb 17 09:41:42 2015 -0700

    Fixed auto-build

[33mcommit 46e98c3306617093e65e138966d4cefb74b9063d[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Feb 13 16:34:07 2015 -0800

    Fixed build.xml for actionjson

[33mcommit 0d4d95b4fa5b0256b71de2a9a5e11bce8f303038[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Feb 13 15:00:23 2015 -0800

    Switched JSON decode calls to use actionjson
    
    Using 'true' as the second parameter tells actionjson to use the native
    decoder when available (in Flash 11+).
    
    Note that actionjson is not a drop-in replacement for util.JSON when
    encoding; in fact util.JSON encoding isn't compatible with Adobe's
    native JSON encoder either.

[33mcommit e73efeb0c656108e40ff29391773ba69d2f04b5b[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Feb 13 12:24:51 2015 -0800

    Added actionjson.swc

[33mcommit d53aaf3d21e66a2f672c723f4081758d00be677f[m
Merge: cfffd01 3d91080
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Tue Feb 10 08:08:16 2015 -0800

    Merge pull request #620 from LLK/add_sprite_tiles
    
    Added white background to sprite thumbnails.

[33mcommit cfffd014c422cc981d8aa01b8402fd3bc77e8f6e[m
Merge: 11eee08 73bbe51
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Feb 9 12:51:59 2015 -0700

    Merge pull request #605 from AndersBillLinden/comment-layout-fix
    
    Comment layout fix

[33mcommit 11eee08cb90a6cc318d1e293f9a2f4eae37dc6d7[m
Merge: 36fab59 679a688
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Feb 9 12:51:25 2015 -0700

    Merge pull request #607 from AndersBillLinden/add-comment-selects-text
    
    Automatically select text when adding comment

[33mcommit 3d910802e1f68be12fbeb4efa61c390e47285c68[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Feb 9 12:18:38 2015 -0700

    Added white background to sprite thumbnails.

[33mcommit 0f2a41bbcec9657ca04e9e660e9b2136d0f90883[m
Author: AndersBillLinden <anderslinden@bredband.net>
Date:   Sun Feb 8 23:44:51 2015 +0100

    Only have one FileFilter containing both suffixes (.sb and .sb2)

[33mcommit 36fab59bd27f2d7ff76773b2ec9356c6c74f2f37[m
Merge: 943aea9 1241a3c
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Feb 2 16:50:12 2015 -0700

    Merge pull request #608 from AndersBillLinden/esc-cancels-dialogs
    
    ESC in a dialogs

[33mcommit 1241a3c1bf1b7e92eff09fafa0357717582d2675[m
Author: Anders Lindén <anderslinden@bredband.net>
Date:   Sun Feb 1 04:10:04 2015 +0100

    When the user presses ESC in a dialog, cancel is called.

[33mcommit 679a6889047ada98b4cf66a91d19fac428324fa0[m
Author: Anders Lindén <anderslinden@bredband.net>
Date:   Sun Feb 1 04:01:33 2015 +0100

    When the user adds a comment to a block, it would be convenient to have the text "add comment here..." selected and the TextField focused.

[33mcommit 73bbe51efe70fa0f5f4b88cf31cc7939d12ec9f0[m
Author: Anders Lindén <anderslinden@bredband.net>
Date:   Sun Feb 1 02:37:18 2015 +0100

    When a user defined block has been edited, and some inputs has been added/removed, the width of the block can change, so we need to call fixCommentLayout.

[33mcommit 943aea92f554cccbea60bd5918b3ffd2398ed488[m
Merge: 0c1dec5 7c7efa3
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jan 27 13:32:17 2015 -0700

    Merge pull request #597 from LLK/separate-eraserWidth
    
    Store eraser width separately from pen width

[33mcommit 7c7efa38a48c585c70ae5b6531386e0e9eb3543c[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jan 27 10:49:15 2015 -0800

    Store eraser width separately from pen width
    
    The default eraser size is larger than the default pen size, but the
    limits are currently the same.

[33mcommit 0c1dec566494e7182adefd9edc24aacabe375f5b[m
Merge: dcf6817 1059979
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Jan 22 10:26:09 2015 -0700

    Merge pull request #592 from LLK/fix_add_sprite_3d
    
    Force an update to the 3d renderer when a sprite is added to the stage.

[33mcommit 10599793c4511ef848f05dbea8c130795cee52b0[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Jan 22 10:19:24 2015 -0700

    upped version to 432

[33mcommit d2cf9dbacfafcb97fb7b336294f08f8807a1bb73[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Jan 22 10:11:06 2015 -0700

    Force an update to the 3d renderer when a sprite is added to the stage.

[33mcommit dcf68170f2dcf3b9e2dba6a40e842e811e09d5fe[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Thu Jan 8 17:11:51 2015 -0500

    v431

[33mcommit 6765fc71ca63a94889ee57784a5b8f76ad6368e7[m
Merge: c48840d 956cb33
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Jan 8 11:31:38 2015 -0500

    Merge pull request #577 from djdolphin/master
    
    Check for HTTPS also when determining if offline

[33mcommit c48840d7e1f6e32eefd10fb27519fcb79c3d15c2[m
Merge: 1e70338 065e77d
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Jan 8 11:28:26 2015 -0500

    Merge pull request #574 from LLK/larger-eraser
    
    Scale the eraser up to make it easier to use

[33mcommit 956cb33b058021d5616d978a467c0c2e10ddc2f3[m
Author: djdolphin <creative4ever@rocketmail.com>
Date:   Wed Dec 24 08:51:40 2014 -0500

    Check for HTTPS also when determining if offline
    
    Should fix problem with project player

[33mcommit 065e77db009fe9a7847b4a5d5c2848dfdede0985[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Dec 18 12:43:31 2014 -0800

    Scale the eraser up to make it easier to use
    
    The bitmap-mode eraser tool is now 4x larger than it used to be.

[33mcommit 1e7033823925c1b7b94181971176dbab18534dbe[m
Merge: e010b9e f9c7f99
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu Dec 18 10:53:00 2014 -0800

    Merge pull request #573 from LLK/fix_mp3_with_flash11
    
    Fixed MP3 name handling during import

[33mcommit f9c7f99800bd84feec26442de4fd8d441b96f17c[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Dec 18 10:11:58 2014 -0700

    Fixed MP3 name handling during import

[33mcommit e010b9e4912385dd6ad90f12b60e804bfacffa5a[m
Merge: 4e1a0af fbaf5e6
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Wed Dec 17 15:31:58 2014 -0800

    Merge pull request #508 from la10736/master
    
    Fix Bug #460: recover user selected language at start up

[33mcommit 4e1a0afdd76265f9b5114d231d335cf21bdd5520[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Dec 15 23:55:51 2014 -0800

    v430

[33mcommit 30682c8902bf234214d11fab0ba865dd543064ce[m
Merge: 3d1b574 9f03f36
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Dec 11 13:32:55 2014 -0700

    Merge pull request #565 from LLK/toggle-3d-fix
    
    Add null check on buffer disposal for fx change

[33mcommit 9f03f36aabfcdf257c300d566d87c11e47e86d4a[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Dec 11 10:53:35 2014 -0800

    Add null check on buffer disposal for fx change
    
    This fixes an exception that was being thrown when toggling 3D off and
    back on with control-M.

[33mcommit 3d1b57431e2cfb0e35542b5a244d6093e3ad5ec8[m
Merge: 5955b2e 223dffa
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed Dec 3 13:33:15 2014 -0700

    Merge pull request #556 from LLK/fix_palette_change
    
    Change the block category when the mouse clicks instead of on mouse_up

[33mcommit 5955b2e842bfaf1277dede3d075d3e78c27c7011[m
Merge: 79ea49d 6f32325
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Wed Dec 3 12:30:24 2014 -0800

    Merge pull request #558 from LLK/fix_mp3_with_flash11
    
    Use Flash 11's Sound::loadCompressedDataFromByteArray to load MP3 files

[33mcommit 6f32325981121db6b2d3c316d28363f08d3064ed[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed Dec 3 12:26:38 2014 -0700

    bumping version to 429a

[33mcommit 8c3bf4a2d0727854c6fab83ed070457622e13342[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed Dec 3 12:25:14 2014 -0700

    Added try/catch in case sound.loadCompressedDataFromByteArray() fails.

[33mcommit 79ea49dc0ada749cc5ac37da45fcaacc39db0096[m
Merge: cf4f874 867c5f6
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Wed Dec 3 07:55:25 2014 -0800

    Merge pull request #559 from LLK/revert_sprite_library_frames
    
    Removed the code that adds frames to sprites.

[33mcommit 867c5f602c0f578184b48f9aa5addc947a618dca[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed Dec 3 08:21:40 2014 -0700

    Removed the code that adds frames to sprites.

[33mcommit 54ff99a11f07d3e588afbba46c9fbd3c3cf97dd2[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Dec 2 17:44:32 2014 -0700

    Use Flash 11's Sound::loadCompressedDataFromByteArray to load MP3 files when available

[33mcommit 223dffab607b3a5fe1a184bc9e02a6ef5ea620bf[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Dec 2 12:48:07 2014 -0700

    Now changing the block category when the mouse clicks instead of on mouse_up.

[33mcommit cf4f87448ab837bb78022b7941f241f922e30dd0[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Nov 24 00:14:05 2014 -0800

    v429

[33mcommit 4df56b6565293dd2ee7295aa6f492c5a9f29a0da[m
Merge: db8df45 89e84bd
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Nov 17 13:13:57 2014 -0700

    Merge pull request #519 from bobbybee-tests/optimization/list-arithmetic
    
    Slight performance boost when performing arithmetic on lists (again, thanks DCPU-16)

[33mcommit db8df458fe8f6b7e0d9110ee97f6fa5f46880cee[m
Merge: 84e3961 5374f89
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Nov 17 12:31:59 2014 -0700

    Merge pull request #548 from LLK/fix_costume_md5
    
    Don't overwrite the MD5 of a costume that failed to load.

[33mcommit 84e39611a8a87f21d0da9b742dc76128bb84220d[m
Merge: fdc1229 dec1c72
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Mon Nov 17 12:19:55 2014 -0500

    Merge pull request #543 from LLK/fix-svg-clone
    
    Cloning a Shape now copies the whole transform

[33mcommit 5374f89100a939df4ca368b9253ae60349d9b420[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Nov 17 10:05:16 2014 -0700

    Don't overwrite the MD5 of a costume that failed to load.

[33mcommit fdc1229431c853278822215ce3e213a06e1b1a5c[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Nov 13 10:00:46 2014 -0800

    v428a

[33mcommit 5e89eef21d5dbf4aa60d4dad2210d670b3f9f56e[m
Merge: 9a8c902 41eca4a
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu Nov 13 12:47:50 2014 -0500

    Merge pull request #546 from LLK/fix-#544
    
    Color detection fixes

[33mcommit 41eca4a22d14bde0c90df2ff9723163af3b9c02e[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Nov 13 09:44:42 2014 -0800

    Color detection fixes
    
    Align getOtherRenderedChildren() to pixels
    Revert mask in getBitmapWithoutSpriteFilteredByColor() to 0xF8F8F0

[33mcommit dec1c729e65544967fcc973b750a167f9882ec72[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Nov 12 15:31:33 2014 -0800

    Cloning a Shape now copies the whole transform
    
    Fixes LLK/scratch-flash#467

[33mcommit 9a8c9023ca66e83a69dbfe7be84184755840497d[m
Merge: 3f07456 3f2218d
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Wed Nov 12 12:29:44 2014 -0500

    Merge pull request #541 from LLK/fix_edge_bounce
    
    Use ScratchSprite::bounds() instead of Flash's less accurate getRect() m...

[33mcommit 3f2218d1102f527d13147e232b418960f1d776b4[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed Nov 12 10:08:29 2014 -0700

    Use ScratchSprite::bounds() instead of Flash's less accurate getRect() method.

[33mcommit 3f0745665f8ce9f5b95af825e1a55ad54575bfea[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Nov 10 10:01:22 2014 -0800

    v428

[33mcommit d8a6ab47365ac537021ea8994537b04e46deef3c[m
Merge: e44d387 de5f20a
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Nov 7 16:52:13 2014 -0500

    Merge pull request #533 from LLK/minimal-shader
    
    Minimal shader

[33mcommit e44d3872819bd6cdab7fb24ec5bda9df380cb653[m
Merge: 700c0b4 6d5beaa
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Fri Nov 7 11:20:17 2014 -0500

    Merge pull request #537 from LLK/revert_key_hat_change
    
    reverted stack restarting for whenKeyPressed hats

[33mcommit 6d5beaa3d2163152f459c0a2b7582cc33c1bb84c[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Nov 7 10:24:19 2014 -0500

    reverted stack restarting for whenKeyPressed hats

[33mcommit 700c0b4fc784177b50204f3980f70db29e316ef6[m
Merge: 5bd1110 f86dae5
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Fri Nov 7 00:00:22 2014 -0500

    Merge pull request #535 from LLK/fix_color_touching
    
    Don't render things behind a sprite with subpixel coordinates

[33mcommit f86dae5e5b432e74d83bc48ff851a85559440670[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Nov 6 23:49:16 2014 -0500

    Removed unnecessary argument

[33mcommit d592ffa00c5378d2da2a90a6ce0dca0a5f57fa4f[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Nov 6 23:46:35 2014 -0500

    Don't render things behind a sprite with subpixel coordinates

[33mcommit 5bd1110c900508c45b384da5562695056f87b4e9[m
Merge: ed5e316 f077826
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Nov 6 23:08:31 2014 -0500

    Merge pull request #529 from LLK/thumbnail-load-done
    
    Always call done() after loading a thumbnail

[33mcommit ed5e316bb5ac1f5c5c91336e66c3d25403212b30[m
Merge: 6e6881b 9b244d0
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu Nov 6 23:03:35 2014 -0500

    Merge pull request #513 from LLK/fix_svg_viewbox
    
    Make the SVG viewbox more accurate.

[33mcommit de5f20ab5300d15478d7ba84a37452f92e886065[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Thu Nov 6 22:43:08 2014 -0500

    Cleaned up index & vertex buffer resize code

[33mcommit 6e6881b024394fb93756d7512151104bc314a6b4[m
Merge: bfa8b9f 2fd63f6
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Thu Nov 6 22:33:21 2014 -0500

    Merge pull request #534 from LLK/fix_when_key_pressed
    
    Key presses will always restart whenKeyPressed hats as long as the key w...

[33mcommit 2fd63f612ddefdf16297f9b9fe29d17a4673c31d[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Nov 6 22:22:52 2014 -0500

    Key presses will always restart whenKeyPressed hats as long as the key was released and repressed.

[33mcommit 37dc73e49cf9881091d9ded3bed57fbc4fd00404[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Thu Nov 6 15:40:27 2014 -0500

    Minimize the size of the vertex buffer
    
    The vertex buffer no longer contains data for an effect unless that
    effect is used (non-zero) somewhere in the vertex buffer. The vertex
    shader passes along only those vertex attributes which are filled, and
    the fragment shader uses aliases to map effect attributes to varying
    registers differently depending on which attributes are present.
    Also fixed a bug where updateEffects() was not being called when using
    the "clear graphic effects" block.
    Also cleaned up some old dead code.

[33mcommit f077826692ef57e60cde84e6c6c922914c3f9794[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Wed Nov 5 16:12:04 2014 -0500

    Always call done() after loading a thumbnail
    
    When loading thumbnails for the media library, some error cases were not
    reporting that the work item was done. This caused the thumbnail loading
    code to stop before completion and many thumbnails would not be loaded.
    This would only happen if ten thumbnails failed to load.

[33mcommit b23c4c4d0dfd6a4334218598d481185aab77a185[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Oct 30 15:48:45 2014 -0700

    Pack texture ID with the other required attributes
    
    The fragment shader can now treat v0 and v1 as dedicated to
    always-required attributes in a stable layout. The layout of the v2 and
    v3 registers will vary depending on which effects are in use.

[33mcommit ebeb107c175478b2a534801ebf8d73dab34204bd[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Oct 30 14:24:07 2014 -0700

    Use symbolic names for vertex attributes

[33mcommit f5e98642a86bef976d0cfdc405a5c81fd358f2d6[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Oct 30 12:49:52 2014 -0700

    Don't try to use swizzle on output registers
    
    AGAL doesn't support swizzing the components of the register used for
    the output of an operation. This change fixes the one place that was
    relying on output swizzle (introduced in the previous commit) and
    removes cases where the code implies output swizzle but works without.

[33mcommit 1a1ff883687aa472d1b3f4f20a0fb5c5c62bb27d[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Oct 30 11:05:37 2014 -0700

    Converted shaders to macro syntax
    
    Both the vertex and fragment shader are now built with the AGALMacroAssembler.
    Also any errors during assembly are now reported through logMessage, which goes to Raven/Sentry in online builds.

[33mcommit 79e2d46c203348a552249aea381a9116ff9036bb[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Oct 30 11:03:06 2014 -0700

    Added support for comparison operators

[33mcommit d67464ea068c6d41f81f6f455d36211d2683e3f6[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Oct 24 14:26:54 2014 -0700

    Cache shader sets based on a calculated ID
    
    The ID is calculated from the number of textures to be sampled and the
    active effects.
    The cache is flushed if the context is lost and (re)populated on demand.

[33mcommit bbc728f6f5b872ead317bb461693e07c8ebe9440[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Oct 23 15:58:04 2014 -0700

    Track activated effects and build minimal shader
    
    Seems to work in most cases but needs more testing; there are probably
    cases where the effect refcount can become inaccurate.
    Still to do: allow reuse of previous (cached) assembler output and
    consider binding fewer texture samplers when possible.

[33mcommit 8a9bc6ede91bf6e07d073eec846a549c12dd3cc8[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Oct 22 15:38:52 2014 -0700

    Fragment shader ifdefs for effects and sampler count
    
    This change also switches fragment shader compilation to use the
    AGALMacroAssembler.

[33mcommit d2208f5c4a68be5f32725fedaaa078dabbba8875[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Oct 22 11:44:16 2014 -0700

    Fixed parsing line comments containing semicolons
    
    Also squashed a warning and improved readability of code in flight.

[33mcommit 2ea081e646bcf9ef1b68b6e97d76736d1bad1590[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Oct 14 13:59:45 2014 -0700

    Moved shader code into embedded files

[33mcommit bfa8b9f1ffe3304cc60bc71e140b22abfa67402a[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Oct 28 13:02:14 2014 -0700

    Bumped version to 427

[33mcommit f1e21ec7488ccccb74a2c01745a1c4f8779532e9[m
Merge: 2f647ea 8af0b0f
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Tue Oct 28 13:43:54 2014 -0400

    Merge pull request #521 from LLK/fix_grow_fill
    
    Switch to select tool when image editing tools are disabled.

[33mcommit 8af0b0ff11a75c9d191e05c001b0e3d4f8498183[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Oct 28 11:37:29 2014 -0600

    Switch to select tool when tools are disabled.

[33mcommit 2f647eaeb1e49c46edf4eb7a5e51436ba15a9eab[m
Merge: cca2384 30c9e1a
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Oct 28 10:56:28 2014 -0600

    Merge pull request #301 from nathan/empty-sprite-library-ui
    
    Change library UI so sprites with empty names and costumes are still visible

[33mcommit cca2384c594e64279b30f2cc886047b0909ff26d[m
Merge: ba47639 9b7499d
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Oct 28 10:53:38 2014 -0600

    Merge pull request #325 from nathan/scroll-frame-update-size
    
    Fix updating size of scroll frames

[33mcommit ba47639655c50aa3ec2f390225a34c4df8975dba[m
Merge: 64869ea ebe20df
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Oct 28 10:51:20 2014 -0600

    Merge pull request #392 from LLK/drop-number-on-boolean
    
    Allow dropping reporters on predicates in text/number slots

[33mcommit 64869ea5f680baba33ce007bc3585396f732bc41[m
Merge: df1225f 0fa797f
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Oct 28 10:44:24 2014 -0600

    Merge pull request #270 from nathan/shape-tool-selection
    
    Make rectangle, ellipse, and text tools consistently stay selected after creating a shape

[33mcommit df1225f106c2bbcda60efa8f0737cb509c13328b[m
Merge: 0be73cb 52a2ee8
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Oct 28 10:37:44 2014 -0600

    Merge pull request #520 from LLK/nathan-prevent-var-shadowing
    
    Nathan prevent var shadowing

[33mcommit 52a2ee88bbe93c1129541886e4e5895f428d0d27[m
Merge: 0be73cb 9c3e957
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Oct 28 10:25:22 2014 -0600

    Merged Nathan's variable name change fixes.

[33mcommit 0be73cba0e4b642f4c94df2833e3ac587ff61e1b[m
Merge: 5c8f0c0 2282eb6
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Oct 28 10:10:59 2014 -0600

    Merge pull request #348 from nathan/translation-fixes
    
    Translation fixes

[33mcommit 5c8f0c06b5ec34828a0d9270d96c9287e5cd3983[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Oct 27 13:48:42 2014 -0700

    Bumped version to v426c

[33mcommit ef6af4565731c842627f0b4726f0c34125b7d48a[m
Merge: 1190b1a 504b139
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Oct 27 09:09:34 2014 -0600

    Merge pull request #518 from bobbybee-tests/optimization/list-replace
    
    List replace is now about 1.5x faster. Thanks DCPU-16 ^_^

[33mcommit 89e84bd84286551ad359aa8ac756d7d998f93fd7[m
Author: bobbybee <j104@rocketmail.com>
Date:   Sun Oct 26 15:57:04 2014 -0400

    Slight performance boost when performing arithmetic on lists

[33mcommit 504b13995369611c1e5d6fa89c94cacaf8319843[m
Author: bobbybee <j104@rocketmail.com>
Date:   Sun Oct 26 15:46:29 2014 -0400

    List replace is now about 1.5x faster. Thanks DCPU-16 ^_^

[33mcommit 1190b1a6afdf3a193247006c495f37f87133f04f[m
Merge: ee378a5 c48bc6d
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Oct 24 16:14:42 2014 -0600

    Merge pull request #314 from nathan/poll-match-protocol
    
    Match protocol more closely for /poll in HTTP extensions

[33mcommit ee378a5fee78bee236f1f6ea74d5a65bc5cae49b[m
Merge: bc61cef 3120435
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Oct 24 14:36:45 2014 -0700

    Merge branch 'serial-thread-fix'
    
    Accidentally skipped merging this before the hotfix release

[33mcommit bc61cefb8796638184bd3cd9bfdd9be54e601f2b[m
Merge: 41dc70e ef84c09
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Oct 24 13:04:25 2014 -0600

    Merge pull request #515 from LLK/agal-macro-assembler
    
    Updated AGALMiniAssembler and added AGALMacroAssembler

[33mcommit ef84c094b4988e6ab5f426469aff9e4eac4317a6[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Oct 22 11:36:34 2014 -0700

    Updated AGALMiniAssembler and added AGALMacroAssembler
    
    Obtained from https://github.com/adobe-flash/graphicscorelib

[33mcommit 41dc70e4afc42f8bf032fe1ac5bb18edf34eaca9[m
Merge: d5ff161 bd967fe
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Oct 21 14:04:06 2014 -0600

    Merge pull request #507 from LLK/refactor3d
    
    Refactor3d

[33mcommit bd967fe6a5f52b52d3183a20da76f3d315564447[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Oct 21 11:30:36 2014 -0700

    Added missing function(){} wrapper

[33mcommit 72985d9e2c9a6851389cc929b86f54684a85c536[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Oct 21 11:03:00 2014 -0700

    Updated Travis build file to build with/without 3D

[33mcommit 05ea63b5f8b87aa5f9070a774c07c74833ec6e0f[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Oct 14 14:55:13 2014 -0700

    Fixed improper 'this' in bitmap2d() local function
    
    Thanks @sclements for finding this problem

[33mcommit d8810308afa79b97ff81f387dd801a6184d67eb6[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Oct 10 10:59:52 2014 -0700

    Fixed Ant build WRT SCRATCH::allow3d compile flag

[33mcommit 6c57b15aaa2cf19dc01c09ad1e658425b7c065c4[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Oct 10 09:35:40 2014 -0700

    Wrapped 3d code with conditional compilation flag
    
    The 'SCRATCH::allow3d' flag now controls 3D-related code.

[33mcommit 4ba5399034f9291ed61bc2aaa21c6997df08d3ca[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Oct 9 14:40:04 2014 -0700

    Reformatted code

[33mcommit 4ed5f61085da9dc696ba45884f8a71206ea6553e[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Oct 9 13:40:40 2014 -0700

    Moved 3d_render_src contents into src
    
    To simplify building and debugging the 3D rendering code, I moved it
    into the main src/ directory. This breaks the AIR 2.6 build, but an
    upcoming change will fix that.

[33mcommit 3120435412af7447e340befd4ab821fa21ecc417[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Oct 20 11:30:39 2014 -0700

    Bumped version to v426b

[33mcommit 9b244d0aaa404fb4519102a01da906feb117da76[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Oct 16 10:22:08 2014 -0600

    Made the SVG viewbox more accurate.

[33mcommit d5ff1613d023d421007fb03070c75cf4cdd46b98[m
Merge: dea8b8e a1bd479
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed Oct 15 09:44:32 2014 -0600

    Merge pull request #488 from LLK/json-error-details
    
    Include JSON in error report during JSON parse

[33mcommit dea8b8e8e5cc34ee50d33abc44437096ec740e79[m
Merge: 28eff03 26c843f
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed Oct 15 09:42:44 2014 -0600

    Merge pull request #489 from LLK/handle-ioerror
    
    Ensure all loadBytes calls handle IOErrorEvent

[33mcommit 28eff033a3018ea52b79ceaf13caad972d2e8bc4[m
Merge: 48aca30 82f788b
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Tue Oct 14 18:43:29 2014 -0400

    Merge pull request #512 from LLK/fix_3d_touching
    
    Fix 3d touching

[33mcommit 82f788be92711fa7242eb657215ef5d58caa575a[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Oct 14 16:26:43 2014 -0600

    Fixed argument for hitTest call to bitmap()

[33mcommit b6e8075b70ed04e1b8232cd07dd9a3e2672357d3[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Oct 14 16:15:39 2014 -0600

    Fixed exception when dragging and dropping a sprite in 3D mode.

[33mcommit 9855a667e222ec082b8cacee9038b5f66190cf72[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Oct 14 16:05:16 2014 -0600

    Fixing touch testing in 3D

[33mcommit 48aca30f1dcc10aac430f8f976b4f516f8fca4e2[m
Merge: 967223e 89067bc
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Tue Oct 14 17:30:37 2014 -0400

    Merge pull request #510 from LLK/bump_stage3d_req
    
    Bumped Stage3D's required Flash version to 11.7 since Adobe de-optimized...

[33mcommit 89067bc16f7c1760621306a763a6b7ae8911392e[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Oct 14 15:16:01 2014 -0600

    Bumped Stage3D's required Flash version to 11.7 since Adobe de-optimized PixelBender with Flash 11.7

[33mcommit 967223effb950e5e17ed7801b59b03d343a2d78b[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Oct 14 12:59:13 2014 -0600

    Bumped to v426

[33mcommit fbaf5e64b7a512a35e52037278889a10601b3a0c[m
Author: la10736 <michele.damico@gmail.com>
Date:   Sat Oct 11 18:56:43 2014 +0200

    Fix Bug #460: recover language setting on start
    
    Littele refactor of Translator.setLanguage(). n bootstrap phase call
    getLanguage from server and set the value in the interface.

[33mcommit 484eca4b6afb3f4199cc3c0da6c2a917e214abc8[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Sep 24 08:49:07 2014 -0700

    Bumped to v425

[33mcommit a2acfa6acd4c751c55d2c3a8b44aae839c0c0598[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Sep 23 12:01:23 2014 -0700

    Removed ' (beta)' from offlineNotice

[33mcommit 9b0f2d795190b59ef4f1b0712b9cfcf427e30971[m
Merge: 3cb6cf9 a986ca4
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Sep 22 10:06:23 2014 -0600

    Merge pull request #495 from LLK/translate-variables
    
    Translate variables

[33mcommit a986ca4983b113d8920dee594cdbbd78de044cd0[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Sep 22 08:49:11 2014 -0700

    Use StringUtil from mx.utils, not com.adobe.utils

[33mcommit 3cb6cf93c4fbebbfb253e2bf3bb43efadd1f054f[m
Merge: 917d4b5 aec67d8
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Sep 22 09:14:05 2014 -0600

    Merge pull request #493 from LLK/optimize-svg-import
    
    Refactor cmdsForPath() to be nicer to the GC

[33mcommit 515c47f18ec56ef9a0f854ed11e8dfd47ad083a1[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Sep 19 14:39:48 2014 -0700

    Added variable substitution support to DialogBox

[33mcommit a3ba7c922c9c3f0d6c3084fa57f1ccd9f86f2aef[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Sep 19 13:09:16 2014 -0700

    Cleanup in DialogBox.as, most variables now private

[33mcommit 232dab450a21810ae5c16eac9917f5580bbcbcf0[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Sep 19 10:54:03 2014 -0700

    Translator.map() now supports variable substitution

[33mcommit f5c408d4bc4700a2a91f2890dda1c1123caf675f[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Sep 19 10:43:18 2014 -0700

    Added StringUtils.as with substitute() method

[33mcommit 32be7d6e76c26bb1d60c826b0cd32738d0df8bb5[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Sep 19 10:51:24 2014 -0700

    Removed trimWhitespace in favor of StringUtil.trim

[33mcommit 686d014290b2c46cab58be123bc4a9da1b336e81[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Sep 19 09:55:45 2014 -0700

    Clean up Translator.as

[33mcommit aec67d8d67ccef8b5f04e378a0346a07cef7b0ae[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Sep 16 16:36:39 2014 -0700

    Refactor cmdsForPath() to be nicer to the GC
    
    On the particular large path I was testing, the time to run a single
    cmdsForPath() went from more than 15 seconds down to 2.4 seconds. This
    path contained many, many cubic curve commands.

[33mcommit 917d4b52fa4542485d602bffe858b654ba7330e5[m
Merge: a30638b 0040b24
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Sep 16 16:00:35 2014 -0600

    Merge pull request #492 from LLK/leave-room-for-tips
    
    Subtract tips width from content area

[33mcommit 0040b2426c1b13bfbe18c03024e23af54ed1f96b[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Sep 16 11:28:00 2014 -0700

    Subtract tips width from content area
    
    When updating the layout, subtract tipsWidth() from the width of the
    content area in order to leave room for the tips window. It's up to the
    derived classes to decide what tipsWidth() means: it returns zero here
    since the open source version doesn't include tips content.

[33mcommit a30638bab169fc7174b6cb2e1f5a39ba4bbea9d5[m
Merge: d966f1a dff4182
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Sat Sep 13 16:46:28 2014 -0400

    Merge tag 'v423g'
    
    Conflicts:
    	src/Scratch.as

[33mcommit d966f1a953dcef3406e2eb5ebbd2c92a7027e6b2[m
Merge: ce50067 b90b814
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Fri Sep 12 10:05:49 2014 -0400

    Merge pull request #487 from LLK/v424
    
    v424

[33mcommit 26c843fab7d7fb5dec58ee6b1fd3f4973fa6d234[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Thu Sep 11 16:26:47 2014 -0400

    Ensure all loadBytes calls handle IOErrorEvent

[33mcommit a1bd47961bb2749a0e83ce5f7fe696dfe97dcb26[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Thu Sep 11 15:09:27 2014 -0400

    Include JSON in error report during JSON parse

[33mcommit b90b81494938fd6c555cb15a37c40f916fc591a4[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Wed Sep 10 18:14:38 2014 -0400

    Setters null the MD5 instead of calculating it
    
    Calculating the MD5 on every change was proving to be a performance
    problem for some larger assets

[33mcommit 03811364d78053a4a49669a341f2a4db813f8aaa[m
Merge: af67775 d4d2c83
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Wed Sep 10 17:54:30 2014 -0400

    Merge pull request #486 from LLK/recalculate-md5-b
    
    Calc MD5 in setters for sound and costume data

[33mcommit d4d2c8397dc9c65e219f62d9369ba9f2866bbb48[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Wed Sep 10 17:30:16 2014 -0400

    Calc MD5 in setters for sound and costume data

[33mcommit ce500679896fe4f019f76c8cefc2f0f61206e71b[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Sep 9 16:47:22 2014 -0600

    Bumped to v424

[33mcommit db3f52f4824816c09841846ab311c31305dad514[m
Merge: be8ddd6 0173529
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Sep 8 17:08:49 2014 -0600

    Merge pull request #291 from nathan/fix-run-feedback
    
    Fixed incorrect run feedback when opening editor

[33mcommit 0173529f77ece86cbabd54291d1b0d9e69115ab6[m
Merge: fd5edc7 9b8f4c2
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Sep 8 19:04:37 2014 -0400

    Merge branch 'master' into fix-run-feedback
    
    Conflicts:
    	src/interpreter/Interpreter.as

[33mcommit af677758f44c129a46c72f8fbd2799825a4bbfa5[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Sep 8 15:38:22 2014 -0700

    Bump version to v424

[33mcommit be8ddd6136da7ba937bc5a77a6793244ebc444e7[m
Merge: 39b8fc5 dd76a84
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Sep 8 16:12:20 2014 -0600

    Merge pull request #287 from nathan/scroll-while-dragging
    
    Added autoscrolling while dragging

[33mcommit 39b8fc5fd72c132e7ea0176a180fc68ad174e445[m
Merge: 9a6caac 7143bb1
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Sep 8 16:08:04 2014 -0600

    Merge pull request #436 from LLK/fix-eof-error
    
    Fix EOFError in scratch::ScratchRuntime/installProjectFromData

[33mcommit 9a6caacf18595ed5e46b88ce76b3600597da6734[m
Merge: 8c51d77 3f74e06
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Sep 8 16:07:32 2014 -0600

    Merge pull request #430 from LLK/extension-default-menus
    
    Allow extensions to use %c

[33mcommit 8c51d779ff0764a6b0bfc8a1bdd78404e795035b[m
Merge: dec174f 5f87fc9
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Fri Sep 5 12:17:44 2014 -0700

    Merge pull request #480 from LLK/fix-error-1009
    
    Fix error 1009

[33mcommit 5f87fc98c309084575df90a003f1d027af53599c[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Sep 5 09:49:23 2014 -0700

    Protect against sound failing to play

[33mcommit 8dfa0eff67554d27c484f92c1a40ff607bb1b244[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Sep 5 09:33:36 2014 -0700

    Avoid null deref in ScratchObj/defaultArgsFor()
    
    Use Scratch.app instead of DisplayObject/root() to access the app.
    Ensure that a ScratchObj's list of costumes is never undefined or null.

[33mcommit b9aa9f9f7e5b3b378a2def0b51981c75e0e9a04e[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Sep 4 16:22:11 2014 -0700

    Added null checks during ObjectTransformer shudown

[33mcommit 2d19efb33a18bee6c94f161d8c41f9b39e297862[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Sep 4 11:31:48 2014 -0700

    Check for null parent in hideAskPrompt

[33mcommit dff41827ea450e0b9fbc5127f223861e94aa7731[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Sep 3 14:23:30 2014 -0700

    Bump version string to v423g

[33mcommit dec174fd35762616153d230d8b3916cdea996ce3[m
Merge: 9b8f4c2 852a5e1
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Aug 29 10:53:30 2014 -0600

    Merge pull request #426 from LLK/project-summary
    
    Add exporting project summaries

[33mcommit 9b8f4c2088d7eeb72ea462af670eb02e2504755c[m
Merge: 85574ae c1a486e
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Aug 28 15:10:53 2014 -0600

    Merge pull request #449 from LLK/missing-translation-strings
    
    Add missing translation strings

[33mcommit 85574ae7c72856743c5d321e5ec36654aeb7a563[m
Merge: 46918a3 8baaf4e
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Aug 28 15:09:31 2014 -0600

    Merge pull request #447 from LLK/detect-transparency
    
    Fix detecting transparency in SVGs

[33mcommit 46918a37474b873d7446e0f80e6a6f23a7edc709[m
Merge: f30fb33 ff5537c
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Aug 28 15:06:40 2014 -0600

    Merge pull request #457 from LLK/base-getbackpack
    
    Stub getBackpack() in MediaInfo, move some checks

[33mcommit ff5537c62ada0e5fb55eefb5f7ba641f1b51413f[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Aug 26 08:57:08 2014 -0700

    Move 'loaders' into MediaInfoOnline

[33mcommit f30fb330c3f4eba60dba0e315d4e613d3f64337a[m
Merge: 74ab748 0517505
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Aug 21 16:24:23 2014 -0600

    Merge pull request #471 from LLK/fix_ext_ui
    
    Fixed the indicator placement and line before it

[33mcommit 0517505a5fb9baba18364369d17c8151a18dcc2d[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Aug 21 16:17:53 2014 -0600

    Fixed the indicator placement and line before it

[33mcommit 74ab7489ec2bc049de2fa25a2b4407001680037e[m
Merge: c460fc2 5ca63fb
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Aug 21 15:13:43 2014 -0600

    Merge pull request #470 from LLK/ext_improvements
    
    Forcing non-internal extensions to isInternal=false

[33mcommit 5ca63fb05a7f581090f35a7cba6773fb6f649cd6[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Aug 21 14:07:31 2014 -0600

    Forcing non-internal extensions to isInternal=false

[33mcommit c460fc289f31913310d14fdef3ced0a64369c1a3[m
Merge: 140c9ce 25ede8c
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed Aug 20 14:49:30 2014 -0600

    Merge pull request #469 from LLK/reenable_external_exts
    
    Allow non-internal extensions

[33mcommit 25ede8cb2f121c95372aa94db34643d837000c94[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed Aug 20 11:58:20 2014 -0600

    Allow non-internal extensions

[33mcommit 140c9ce15ce203dc2f31b06be515ba270ec835a3[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed Aug 20 14:20:49 2014 -0600

    Bumped to v423f

[33mcommit 613013d5259b3db3c1f62af22e219a44ad2ed887[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Aug 19 17:29:51 2014 +0200

    bumped to 423e

[33mcommit 3e4215f3d751ef8e8b185e6dd730e8a6ed7b36cd[m
Merge: dee2d5f 5892382
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Aug 18 17:58:11 2014 -0400

    Merge pull request #462 from LLK/hotfix/2.0.65-2014-08-18
    
    TEMP: Only allow internal extensions (Pico/WeDo)

[33mcommit 589238292264cfa978075f6eb16dcece2e6cbfc2[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Aug 18 11:45:32 2014 -0700

    Bumped version string for hotfix

[33mcommit a4170a63344461771ef03c55fd0d653300600a15[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Aug 18 11:28:03 2014 -0700

    TEMP: Only allow internal extensions (Pico/WeDo)

[33mcommit dee2d5f69bb0b63f5e5308763fa68a283c5d1f4e[m
Merge: adf75db efa5c73
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Sat Aug 16 19:35:04 2014 -0400

    Merge pull request #428 from LLK/video-motion-hidden
    
    Don't trigger video motion hat when sprite is hidden

[33mcommit d661f42bad317f442c9ee205dbf83cfd1a58a937[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Aug 15 10:37:07 2014 -0700

    Stub getBackpack() in MediaInfo, move some checks
    
    This change involves both the scratch-flash and scratch-flash-online
    respositories.
    This allows more code to be shared between the online, offline, and
    open-source editors. This also fixes the 'duplicate' menu option being
    absent on costumes in the offline and open-source editors.

[33mcommit adf75dbeda78552bb2de7c68b2793241ed70fb7e[m
Merge: 44c231e c0a4964
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Aug 13 13:20:25 2014 -0600

    Merge pull request #451 from LLK/fix-set-spec
    
    Fix setting block specs for variable/list getters

[33mcommit c0a496423f3d12a061761f782dde40959af56f38[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Aug 13 14:51:24 2014 -0400

    Fix setting block specs for variable/list getters

[33mcommit c1a486eb3b525995c69e6b1cc557d211eb329555[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Aug 13 14:01:01 2014 -0400

    Add 'video motion' and 'video direction' to translatable strings

[33mcommit 7dc3cc0917c31b180d675e0953174117286502db[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Aug 13 13:57:43 2014 -0400

    Update translations for drawing properties when switching languages

[33mcommit ae12c0f8b88d8e4dd9197356d420670b7ac3acf3[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Aug 13 13:37:55 2014 -0400

    Update 'Add' translation in paint editor when switching languages

[33mcommit 7dfe7992576ecd4e9e6b87f895d2075fd0354d32[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Aug 13 13:37:46 2014 -0400

    Add 'Add' to translatable strings

[33mcommit c0957498941e1213dd1b8a5f6539cde4618d424d[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Aug 13 13:35:52 2014 -0400

    Update paint tooltips when switching languages

[33mcommit b6186a61da9b8dccd133e45d626b8beac9f16b5c[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Aug 13 12:43:36 2014 -0400

    Add 'other scripts in sprite/stage' to translatable strings

[33mcommit d4165161c7e82dfe078aed40f285d57aba1a3686[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Aug 13 12:40:52 2014 -0400

    Translate 'Microphone volume:'

[33mcommit 66a22bed20a736f75b864e9b09fb510cb382d2d6[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Aug 13 12:33:18 2014 -0400

    Add 'Add an Extension' to translatable strings

[33mcommit e1d03df164bc0bf3dac024fa0f12e5b7fdb38bbf[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Aug 13 12:28:22 2014 -0400

    Add 'next backdrop' and 'previous backdrop' to translatable strings

[33mcommit c9e668d77cbf9e262bed6cc58ccb4dfb5ec6de46[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Aug 13 12:15:45 2014 -0400

    Add 'New Message' to translatable strings

[33mcommit 551a8195601dc35c80f6fa95c597556756e9e6e8[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Aug 13 12:13:45 2014 -0400

    Add 'New Block' to translatable strings

[33mcommit 423e74f1317e1aba31a1973f35e272f24bd5fa9d[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Aug 13 12:12:41 2014 -0400

    Translate "text" in procedure editor

[33mcommit 82ea80b6560293b49719b89ab1db1f121ed8db49[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Aug 12 17:59:27 2014 -0400

    Translate "add comment here..."

[33mcommit 8baaf4ea6e80ddb74120fee474ffd761ea111e47[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Aug 12 17:20:22 2014 -0400

    Fix detecting transparency in SVGs

[33mcommit 44c231e29791fcf220697f5d210c771fc4125f7f[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Aug 12 17:15:42 2014 -0400

    Fix touching? menu

[33mcommit dd76a846c192725ffce9511d4088ac60dba390dd[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Aug 12 14:34:27 2014 -0400

    Fix block feedback when autoscrolling

[33mcommit 88eef687912434e17490fe938a469e147d04ea11[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Aug 12 14:21:21 2014 -0400

    Update scrollbars when autoscrolling

[33mcommit 7d2493a28905be6151a7f03586684a68b6e34941[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Aug 12 14:05:47 2014 -0400

    Don't trigger autoscroll when already at the maximum in that direction

[33mcommit 5036ee013c438f1a3d69858a6ef0e149e887481a[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Aug 12 11:50:06 2014 -0600

    Bumped version to 423

[33mcommit 985952d7eea336dc0d8ed760c1f6f43525ca4453[m
Merge: cdfe4d7 e9b217f
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Aug 12 11:21:59 2014 -0600

    Merge pull request #339 from nathan/no-bold-numbers
    
    Stop bolding numeric arguments

[33mcommit cdfe4d702fab9846b9aaab642ad12151265cb999[m
Merge: 2200fdf 2ad0273
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Aug 12 11:21:14 2014 -0600

    Merge pull request #285 from nathan/script-tabbing
    
    Fix tabbing between inputs in a block

[33mcommit 2200fdf6348ef6790525cea9c266d60637eb0827[m
Merge: 69b8e92 f943079
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Aug 12 11:17:46 2014 -0600

    Merge pull request #308 from nathan/import-old-sprites
    
    Add importing old sprites

[33mcommit 69b8e92aa80c2659b50543577b17a6aca4e5d925[m
Merge: 06c5019 4ff43ac
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Aug 12 11:17:10 2014 -0600

    Merge pull request #368 from nathan/list-context-menu
    
    Allow switching list name in reporter from context menu

[33mcommit 06c5019f8ee9f8899adaaf62a306145cb6ed9aaf[m
Merge: b0146e0 134fca7
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Aug 12 11:16:43 2014 -0600

    Merge pull request #370 from nathan/procedure-editor-overflow
    
    Fix overflow in procedure editor

[33mcommit f943079c89fe50ef511cb25962502b922f2a4c9b[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Aug 12 13:16:37 2014 -0400

    Fix a typo (+ => +=)

[33mcommit 134fca7acb394904c7785e487e49e1a64f90518c[m
Merge: b5ca0f7 b0146e0
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Aug 12 13:15:06 2014 -0400

    Merge branch 'master' into procedure-editor-overflow
    
    Conflicts:
    	src/ui/ProcedureSpecEditor.as

[33mcommit b0146e0ef0261f37522ec72294ad7d0a4a891358[m
Merge: ec2ace2 e371a92
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Aug 12 11:08:19 2014 -0600

    Merge pull request #331 from nathan/undelete-save-scripts
    
    Save scripts and update palette when undeleting a block or comment

[33mcommit ec2ace2f0a7858a98c2266ec976e6380e7d2e0e2[m
Merge: 0b52cb2 4e5d1f0
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Aug 12 10:47:27 2014 -0600

    Merge pull request #389 from LLK/args-in-vars
    
    Fix args appearing when variable names contain %n, etc.

[33mcommit 0b52cb208c18a137208ae1b41dfa360b2b48014d[m
Merge: 1879c3f 3730154
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Aug 12 10:46:34 2014 -0600

    Merge pull request #376 from nathan/show-slider-min-max
    
    Show slider min/max as default values in dialog

[33mcommit 1879c3f0da9206ccac67412cc48f3da7fee3a794[m
Merge: 356b272 341adea
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Aug 12 10:11:54 2014 -0600

    Merge pull request #439 from RGBD/svgutils
    
    Added full arc to Bezier curve conversion support

[33mcommit 356b272adc1bb98a210c726664d4b290c6b7b9dc[m
Merge: b96a383 19c4505
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Aug 12 10:04:45 2014 -0600

    Merge pull request #387 from LLK/check-extension-translations
    
    Check built-in extension block spec translations for argument mismatches

[33mcommit b96a383a4083f4029b088a1843a99faeb9be73e3[m
Merge: 37f33f8 6a305bd
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Aug 12 10:02:37 2014 -0600

    Merge pull request #382 from nathan/bitmap-paste
    
    Fix pasting in bitmap editor

[33mcommit 37f33f85d4d62318fa9174c8ca0f8ab28e87f137[m
Merge: 7e66dbf 69721cb
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Aug 12 10:01:05 2014 -0600

    Merge pull request #379 from nathan/bitmap-shape-offset
    
    Fix small offset when adding shapes in bitmap editor

[33mcommit 7e66dbfc4b465793a4558f4aafe1452ae5792ec6[m
Merge: 053d2b2 a621f3f
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Aug 12 09:58:26 2014 -0600

    Merge pull request #445 from LLK/color-picker-block-clicks
    
    Block mouse interaction when picking a color

[33mcommit a621f3f11c8e5077ab9e619af3e73eea8924735e[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Aug 12 11:18:56 2014 -0400

    Fix resizing

[33mcommit cc5a4f40d9c68cdab060e64db6fc1e6ede989d71[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Aug 12 11:14:15 2014 -0400

    Block mouse interaction when picking a color

[33mcommit 341adeacec85b420f3dfd7f29d16e3dd6f88f286[m
Author: Oleg Zubchenko <redgreenbluediamond@gmail.com>
Date:   Tue Aug 12 17:18:36 2014 +0300

    Added degrees to radians conversion in svgutils

[33mcommit 053d2b2eaf172ed2889211f5f57621731183f5c1[m
Merge: 2e39012 6b7d8de
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Aug 11 17:35:57 2014 -0600

    Merge pull request #327 from nathan/scroll-wheel
    
    Send key press events for scroll wheel like Scratch 1.4

[33mcommit 2e39012dbfec1dbeeabcc27e306a8d664378cefa[m
Merge: 9803267 a03d221
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Aug 11 17:34:43 2014 -0600

    Merge pull request #429 from LLK/rename-duplicate-parameters
    
    Rename duplicate parameters in procedure editor

[33mcommit 9803267edba6b97845d6c3de69d767bc929d9a8b[m
Merge: f7d3a88 1df4c8c
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Aug 11 17:31:42 2014 -0600

    Merge pull request #352 from nathan/shift-horizontal-scrolling
    
    Allow holding shift to scroll horizontally with the mouse wheel

[33mcommit f7d3a88055e94786aa25b8b44eb58195ba755847[m
Merge: 98bf772 65af11e
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Aug 11 17:29:14 2014 -0600

    Merge pull request #400 from LLK/spec-escapes
    
    Block spec escapes

[33mcommit 98bf772807c006e2eed511b3dcd4b80cc9a8dc17[m
Merge: 0be5523 7e53fee
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Aug 11 17:26:27 2014 -0600

    Merge pull request #424 from LLK/svg-text-italic
    
    Fix a typo (font-weight => font-style)

[33mcommit 0be5523e6d071c4645368c6b3817ed6391fce19a[m
Merge: 40fe390 cac7540
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Aug 11 17:26:06 2014 -0600

    Merge pull request #427 from LLK/show-auto-created
    
    Update palette when auto-creating variables

[33mcommit 40fe390a5e4973553f8def13d70a8b9500c99496[m
Merge: 1963c3d 2b0c63a
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Aug 11 17:23:26 2014 -0600

    Merge pull request #435 from LLK/blocking-bubble
    
    Fix bubbles for blocking reporters

[33mcommit 1963c3d208a3c8a72c191407eff5986369181f1b[m
Merge: b9d8218 6c099a4
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Aug 11 17:18:06 2014 -0600

    Merge pull request #441 from LLK/dialog-cancel-function
    
    Added ability to call a function on dialog cancel

[33mcommit 6c099a47c45617688c3bea85b7a9f637fcbe65fb[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Aug 11 12:10:01 2014 -0700

    Added ability to call a function on dialog cancel

[33mcommit b9d8218ed9ace87d2762478dee218b45b5bc8bcd[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Aug 11 13:58:52 2014 -0400

    Make some fields protected in ui.media.MediaLibrary

[33mcommit da89a01728afbf2d80f61c17a22fb0dab8bbdacb[m
Merge: bb1cb28 561e8f7
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Aug 11 10:55:23 2014 -0600

    Merge pull request #418 from LLK/revert-406-properly_set_empty_svg
    
    Revert "Use setSVGData() to properly clear a costume that failed to load...

[33mcommit dab2ca1f6d047b9336efe59f82a2d3fb9a91e20b[m
Author: Oleg Zubchenko <redgreenbluediamond@gmail.com>
Date:   Mon Aug 11 00:07:00 2014 +0300

    Fixed typo

[33mcommit 42a8ec7c66faf71f26f3277c7b958241f8e86215[m
Author: Oleg Zubchenko <redgreenbluediamond@gmail.com>
Date:   Sun Aug 10 23:37:47 2014 +0300

    Added full arc to Bezier curve conversion support

[33mcommit 7143bb14f642e13337663e6acba90c9c0d23c41a[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Aug 6 15:44:30 2014 -0400

    Fix EOFError in scratch::ScratchRuntime/installProjectFromData
    
    https://app.getsentry.com/scratchteam/scratch-flash/group/18498222/

[33mcommit 2b0c63ac0fb700e52138ba3c455c8b10683a60a3[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Aug 6 14:45:59 2014 -0400

    Only allow one reporter-bubble thread at a time

[33mcommit f9a8b99a8605addadafeeb0ceadb43bc89ad177c[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Aug 6 14:31:16 2014 -0400

    Fix bubbles for blocking reporters

[33mcommit 3f74e0688a793a941f12cc9b5b2549e8660152da[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Aug 5 14:10:57 2014 -0400

    Allow extensions to use %c
    
    This also allows extensions to use built-in menus if they do not define menus of the same name.

[33mcommit a03d2217bba51e2624801f1fb569b82613a320ec[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Aug 5 12:04:27 2014 -0400

    Rename duplicate parameters in procedure editor

[33mcommit bb1cb286a368e9d4e2d6924689778ab78e5be886[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Aug 5 12:06:15 2014 -0400

    Fix whitespace in ui.ProcedureSpecEditor

[33mcommit efa5c7334629dfa29ee9301cd19eb79ed255954d[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Aug 5 11:06:28 2014 -0400

    Don't trigger video motion hat when sprite is hidden

[33mcommit cac7540fc64b3f9cf0ae33632b5ec938cf5c70d1[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Aug 5 10:47:27 2014 -0400

    Update palette when auto-creating variables

[33mcommit b88402987d003a09e96c44e5441a4eb9704c304b[m
Merge: deeb06d f48a7a4
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Aug 5 08:33:14 2014 -0600

    Merge pull request #425 from LLK/fix-url-fixing
    
    Check for internal extension before fixing URL

[33mcommit 852a5e15bed76228af5425bb14170e8ddf4bb0e7[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Aug 4 23:57:52 2014 -0400

    Add exporting project summaries

[33mcommit f48a7a4128f31a1830a89d1dd18b6d10a90c4682[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Aug 4 15:57:58 2014 -0700

    Check for internal extension before fixing URL
    
    Only internal extensions need their URLs fixed. We should probably find
    a better way to do this, but it's tricky if we want the offline editor
    to be able to load internal extensions without an Internet connection.

[33mcommit 7e53fee098b0b89d3a2f9b83d84e3a0d08584b8a[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Aug 4 17:59:03 2014 -0400

    Fix a typo (font-weight => font-style)

[33mcommit deeb06dcaccf7c30cc2acfa8cf55c64c9c74c059[m
Merge: d4ade19 7cc7a66
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Sat Aug 2 12:03:14 2014 -0600

    Merge pull request #422 from LLK/redraw-on-sound-change
    
    Redraw when changing volume or tempo

[33mcommit 7cc7a66ca91c50535e0976259592f18008f71ed9[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri Aug 1 22:45:30 2014 -0600

    Redraw when changing volume or tempo

[33mcommit d4ade19fce2934d212350d15c594eb9dce3f1814[m
Merge: 259beaf b2fbafe
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Fri Aug 1 16:20:38 2014 -0600

    Merge pull request #378 from nathan/media-info-bitmap-resolution
    
    Fix bitmapResolution in ui.media.MediaInfo

[33mcommit 259beaf998ffa668b755dcbfcbe481c3840bb223[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Aug 1 16:17:01 2014 -0600

    Bumped version to 422

[33mcommit 0f0fea4fc9118defda780d3799d50af41ae2b726[m
Merge: d6f73cc 4f8bfe5
Author: Chris Willis-Ford <cwillisf@users.noreply.github.com>
Date:   Fri Aug 1 15:14:42 2014 -0600

    Merge pull request #421 from LLK/refactor_for_extensions
    
    Refactor for extensions

[33mcommit 4f8bfe5828c9f71c8c84744a8d621046503e487d[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Aug 1 14:56:25 2014 -0600

    Fixed typo

[33mcommit 5e1481cf7b76e621a7da1160a049386e8d8b62a6[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Aug 1 14:47:41 2014 -0600

    Moved BlockColorEditor back

[33mcommit fdd9d4315d8b3f1010778a91a0f44152e6ee4955[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Aug 1 14:05:56 2014 -0600

    Now checking if there is an extension URL and checking it before trying to open it.

[33mcommit 352e34217a150e27305023a7051d5888c933123b[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Aug 1 14:05:15 2014 -0600

    Now removing Javascript extensions when they are disabled. This lets them get loaded again.

[33mcommit bb3e2de4ce5185947d0ce4705f65babe1b060fbb[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Jul 28 13:56:50 2014 -0600

    Fixed immediate reporters with a simple callback since that's how you receive the return value now.

[33mcommit ef989f10721a111cf826cbc236d6aa6fc322fe1d[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Jul 25 12:58:56 2014 -0600

    More methods made protected for overriding and other changes to support extension dev on Scratch.

[33mcommit 16b87026716d52e977f083c6d2ffdc7b4d53a702[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Jul 21 15:00:06 2014 -0600

    Retaining the ID during the extension load process.

[33mcommit c697cede6cf19f05e73db3ad6cbbfa2bf8a84d9f[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Jul 21 13:01:08 2014 -0600

    More work to allow the online version to override parts of the UI. Now all creations of MediaLibrary happen through Scratch.

[33mcommit ace26a4c43b28e5b8996c6e389c38eb70a7fef1f[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Jul 15 13:33:50 2014 -0600

    This didn't need to be here

[33mcommit 8d884d1190757cab40833d99985b4840ee3debe6[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Jul 15 13:17:44 2014 -0600

    Refactored single file loads to use a utility function.

[33mcommit d6f73cccf5a4d64d212972512165c47f484b8613[m
Merge: 648c3dc 75575ab
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jul 30 14:43:11 2014 -0600

    Merge pull request #336 from LLK/extension-poll-wait
    
    Allow only one HTTP poll at a time per extension

[33mcommit 648c3dc31f432babe475a7532034f59d780c012d[m
Merge: f9374dc e4bfaf9
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jul 30 14:41:20 2014 -0600

    Merge pull request #401 from LLK/sprite-info-small
    
    Fix layout for show button in small stage mode

[33mcommit f9374dc58f9fc450a171ee7f6b8b80b72453264f[m
Merge: 8402cd4 8e1e25a
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jul 30 14:40:37 2014 -0600

    Merge pull request #405 from LLK/conditional-add-extension-button
    
    Conditionally add or skip the extension add button

[33mcommit 8402cd4b06c5e5faab8776107c1ea651716bbff4[m
Merge: 22bcb02 89bcfa2
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jul 30 14:39:58 2014 -0600

    Merge pull request #407 from LLK/fix-renaming-sounds
    
    Fix renaming sounds in nested blocks

[33mcommit 22bcb02e603ba878041d3dd7efef3cb07fed7a70[m
Merge: 62bf15e f247bb8
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jul 30 14:39:29 2014 -0600

    Merge pull request #413 from LLK/fix_mic_exception
    
    Now checking mic for null before starting recording mode.

[33mcommit 561e8f72e9b09ac7d7850f008c4553c989159bf2[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 30 14:38:46 2014 -0600

    Revert "Use setSVGData() to properly clear a costume that failed to load"

[33mcommit 62bf15edc36cff4eb8b3544e87e8510659158334[m
Merge: 97c2804 072160a
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jul 30 14:37:54 2014 -0600

    Merge pull request #406 from LLK/properly_set_empty_svg
    
    Use setSVGData() to properly clear a costume that failed to load

[33mcommit 97c2804d2eaf023001b0a6dc2399d4589f937bf5[m
Merge: 49c957b c371c1c
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jul 30 14:33:47 2014 -0600

    Merge pull request #416 from MrSprite/procedureFocus
    
    Fix for parameter focusing

[33mcommit 49c957b5f1dd0cea41fc625c68facf45ba71bff4[m
Merge: 5238660 4965f9d
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jul 30 14:31:09 2014 -0600

    Merge pull request #393 from LLK/block-color-editor
    
    Add block color editor to the Edit menu

[33mcommit c371c1c9a20b8f88acb428e7d09081ecc2e53a97[m
Author: MrSprite <nzcraddock@gmail.com>
Date:   Tue Jul 29 14:36:51 2014 -0600

    Consolidated code
    
    Still fixes #414

[33mcommit de0fd7e89a74739d4e9499a4426ed683ccc31751[m
Author: MrSprite <nzcraddock@gmail.com>
Date:   Tue Jul 29 11:57:27 2014 -0600

    Fix for parameter focusing.
    
    Fixes #414

[33mcommit f247bb81e03058d8ec5607413dadc3a85af81056[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Jul 25 13:00:18 2014 -0600

    Now checking mic for null before starting recording mode.

[33mcommit 52386600ccd09c530ca547d02ff80ee1b4953f02[m
Author: Amos Blanton <amos@scratch.mit.edu>
Date:   Thu Jul 24 13:24:13 2014 -0400

    Update README.md

[33mcommit 641a149e943257a9ec188fd905c66f50d6001814[m
Merge: a8b01ad 5917b6a
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 23 16:31:48 2014 -0400

    Merge tag 'v421'

[33mcommit a8b01ad6da4368f14022950172bfa7cf0e619dce[m
Merge: 689832f 48405a2
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jul 23 14:22:42 2014 -0600

    Merge pull request #402 from LLK/camera-zoom-100
    
    Set zoom to 100% after creating a costume from the camera

[33mcommit 89bcfa29663386eac7cda1a37ff9cd801268c8bf[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 23 16:16:05 2014 -0400

    Fix renaming sounds in nested blocks

[33mcommit 072160a93c218cb5babc805f94bbe16044a67988[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed Jul 23 14:05:22 2014 -0600

    Now using setSVGData() to properly clear a costume that failed to load.

[33mcommit 8e1e25a1e626d5e5837710162269f61587c31c31[m
Author: Chris Willis-Ford <cwillisf@media.mit.edu>
Date:   Wed Jul 23 11:54:31 2014 -0600

    Conditionally add or skip the extension add button

[33mcommit 48405a2d3fe051abd215c2ed92c9925d8fad3206[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 23 12:30:55 2014 -0400

    Set zoom to 100% after creating a costume from the camera

[33mcommit e4bfaf9f7713b2a960f13bd7886b5a35600df221[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 23 12:07:08 2014 -0400

    Fix layout for show button in small stage mode

[33mcommit 65af11e60b35b1469051fb9daabb9718c8019f9d[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 23 11:53:41 2014 -0400

    Fix label field widths for multi-word labels

[33mcommit f7f995ed151aab2f19e252e560882cf5d98f6c01[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 16 15:06:52 2014 -0400

    Escape % and @ signs in specs

[33mcommit 689832f729452334a24e4da9bbeacd2f0c5aaa5a[m
Author: Amos Blanton <amos@scratch.mit.edu>
Date:   Wed Jul 23 11:52:58 2014 -0400

    Update README.md

[33mcommit 5917b6a4d06e6a9e45169f703e9c337fce708801[m
Merge: 942d1f8 ba11fd3
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jul 23 08:04:00 2014 -0600

    Merge pull request #398 from LLK/update-nested-references
    
    Update references nested in other blocks

[33mcommit 94760c7bf1739b102fd21c3417b1af1bc82b15fb[m
Merge: 4dd4811 d7e6764
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jul 22 11:52:12 2014 -0600

    Merge pull request #380 from LLK/fix_sprite_pickup_while_drawing
    
    Fix unintended sprite dragging while drawing

[33mcommit 942d1f8edfb3d44734b673802eb84a06dc434618[m
Merge: 07d8d33 1276fef
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jul 22 11:42:31 2014 -0600

    Merge pull request #397 from LLK/reset-block-scale
    
    Reset scale when restoring block state

[33mcommit 4dd4811fb178041295a5edb7773904a177da9d8f[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 22 10:01:02 2014 -0400

    Fix build status link in README

[33mcommit 6ff8aa1d705659e44b3d48fa761765ca87c6a7fa[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 22 09:59:14 2014 -0400

    Fix link in README

[33mcommit 477c5d8740c87aecb755b4d99ace16603566322f[m
Merge: c73cbfe 3c09f02
Author: Amos Blanton <amos@scratch.mit.edu>
Date:   Tue Jul 22 08:10:52 2014 -0400

    Merge pull request #299 from LLK/readmeEdits
    
    Changes to link to design principles of scratch, explain about PRs for new features

[33mcommit ba11fd3ba502eda0eda5d9533a382e924d5ea909[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jul 21 11:19:56 2014 -0400

    Update references nested in other blocks

[33mcommit 1276fef2da38ebb3e15358ac921cfb538af02f93[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jul 21 11:02:55 2014 -0400

    Reset scale when restoring block state

[33mcommit 4965f9da7f9d5bb645fa64a203b14660c7808c4c[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 16 17:14:45 2014 -0400

    Add block color editor

[33mcommit c73cbfe8b77f0aae5b33c7e87d8e8cc052db9654[m
Merge: 266f5ee 60c64b8
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jul 16 13:33:41 2014 -0600

    Merge pull request #390 from LLK/illegal
    
    Fix IllegalOperationError when running scratch-flash

[33mcommit 266f5eeb158444c4302715eb4e26bdd1fdef72aa[m
Merge: 34700a9 dce40ac
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jul 16 13:30:35 2014 -0600

    Merge pull request #185 from nathan/implement-username-offline
    
    Added a default implementation for the username block when offline

[33mcommit ebe20dfe8bdf293c507096d6c7d78b1b889b7e70[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 16 15:13:53 2014 -0400

    Allow dropping reporters on predicates in text/number slots

[33mcommit 60c64b83591830725a66199d2d838ac888a17d43[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 16 14:27:44 2014 -0400

    Fix IllegalOperationError when running scratch-flash

[33mcommit 4e5d1f0bba1bbaf40572a4967765c932fd02d159[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 16 14:25:56 2014 -0400

    Fix args appearing when variable names contain %n, etc.

[33mcommit 19c4505dbb6ee1e394e093c8228e45e543b79679[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 16 13:56:13 2014 -0400

    Export extension specs as translatable strings

[33mcommit 34700a91b930ef8df13d7c6cc54de2ed4dce06c6[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 16 13:50:40 2014 -0400

    Fix a typo in translation.TranslatableStrings

[33mcommit 49dcf11469404788be69aafc2864982ef0d3fae8[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 16 13:47:10 2014 -0400

    Check built-in extension block spec translations for argument mismatches

[33mcommit b615f6a1ee50623d67b9e22d3c76bb9b32e4a67c[m
Merge: 2ec4a74 80c2e83
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 16 12:22:39 2014 -0400

    Merge pull request #182 from nathan/procedure-editor-font
    
    Update procedure spec editor label font to match block label font

[33mcommit 33302b03f15b03e203b79ebd9c3954904f903ffe[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 16 11:39:00 2014 -0400

    Show error messages when importing invalid sprites

[33mcommit 2ec4a748d43412cb8ca40bd2aca3dfa0c9410705[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jul 15 09:35:32 2014 -0700

    Call into Scratch.app for JS URL fixup
    
    Previously, ScratchExtension was using the File class to fixup JS extensions' URLs. This only compiles for Air apps, so that code had to move into the non-shared ScratchOffline repository. ScratchExtension now supplies the unmodified URL and allows ExtensionManager to call into Scratch.app to make the fixup. By default the fixup method does nothing, which is what the online editor wants, but ScratchOffline overrides the method to make the changes needed in offline mode.

[33mcommit 6a305bd5797f7fcc09d7f19055bfb0d57342244d[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 15 12:03:42 2014 -0400

    Fix pasting in bitmap editor

[33mcommit a2ec6818cb7b3d0c8a7e5f707cf07ae607b6b5be[m
Merge: e8b0cab 07d8d33
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jul 15 08:28:41 2014 -0700

    Merge branch 'master' into abstract_external_interface

[33mcommit d7e6764bea7c87cff3f460de4911b369bc34290c[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Jul 14 14:50:52 2014 -0600

    No longer allowing the proxied mouse-down event to continue propagating. For some reason the stageX/Y values changed after I redispatched it.

[33mcommit 69721cbcb3302ab6e1f8e5e6ed0dc0f0bf1de27c[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jul 14 16:29:11 2014 -0400

    Fix small offset when adding shapes in bitmap editor

[33mcommit 07d8d334fed669163532eab3f36426a45f7fedc1[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Jul 14 14:05:23 2014 -0600

    Bumped version to 421

[33mcommit b2fbafe0ee8e6b3f01f5180535be63d81e22591c[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jul 14 13:27:22 2014 -0400

    Fix bitmapResolution in ui.media.MediaInfo

[33mcommit 94ad49c6cd8c3ea7e297c4a0a7baa7c64593ed28[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jul 14 11:29:35 2014 -0400

    Remove ui.media.MediaLibrary::importMediaList (unused)

[33mcommit 70e4596766a8dfb9d728c9b03c513204ecbdd289[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jul 14 10:42:26 2014 -0400

    Use STAGEW/STAGEH constants in saveScreenshot

[33mcommit 3730154522cd9085ff47a3f89cad9bcd53de30ef[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jul 14 10:17:24 2014 -0400

    Show slider min/max as default values in dialog

[33mcommit 9c3e957a70480d80bc5cff016a450f3167bed858[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jul 14 10:11:50 2014 -0400

    Prevent shadowing by renaming

[33mcommit 3ae225f453e664af03cbea306af317e487619bb5[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jul 14 10:04:26 2014 -0400

    hasVarName -> hasName

[33mcommit b5ca0f738fe916402ec065eb01c9b5fe8bf4831e[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri Jul 11 16:30:34 2014 -0400

    Fix overflow in procedure editor

[33mcommit bc8bf5d726cca3a4ba85f21868eb1fd7968a8acf[m
Merge: f3eb082 78557f0
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri Jul 11 16:16:16 2014 -0400

    Merge pull request #313 from nathan/list-watcher-read-only
    
    Prevent deleting or editing list items in player mode

[33mcommit f3eb082a85e8873ab9fa9c517c76b8892414e5b2[m
Merge: b3f7648 7c6125e
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri Jul 11 16:15:54 2014 -0400

    Merge pull request #319 from nathan/sound-duration-hundredths
    
    Increase precision of formatted sound duration to hundredths

[33mcommit b3f7648fef4b7bc510c4afeff49dad667f948908[m
Merge: 54b5391 fd393de
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri Jul 11 16:15:37 2014 -0400

    Merge pull request #324 from nathan/keep-zoom
    
    Keep zoom and scroll when switching costumes in the image editor

[33mcommit 54b5391f0375580aa24815e67b3ec0b748db00a6[m
Merge: 8d7b415 6495d93
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri Jul 11 16:14:48 2014 -0400

    Merge pull request #333 from nathan/watcher-update
    
    Fix watcher not updating to reflect certain changes

[33mcommit 8d7b4153d7dd55ce68ea3d747d74039e29d66c46[m
Merge: dfb6f92 7db32b9
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri Jul 11 16:14:12 2014 -0400

    Merge pull request #342 from nathan/copy-proc-declaration
    
    Prevent copying procedure declaration blocks

[33mcommit dfb6f9299477e78d8488bcecbb6667c784a39c87[m
Merge: 7d90aa0 3d274ca
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri Jul 11 16:13:50 2014 -0400

    Merge pull request #350 from nathan/empty-costume-center
    
    Fix costume center for empty costumes

[33mcommit 7d90aa075f2774bf5102a8f180cbe47ea437168a[m
Merge: b26b936 c845ce4
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri Jul 11 16:13:17 2014 -0400

    Merge pull request #351 from nathan/pick-transparent-color
    
    Fix picking color from editor background yielding black instead of white

[33mcommit b26b93655bde9331b8239326e39f8a7f072ca424[m
Merge: 2f6fa49 7e5352c
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri Jul 11 15:54:24 2014 -0400

    Merge pull request #367 from LLK/fix_3d_ghost_stamp
    
    Fix 3d ghost stamp and a null reference exception

[33mcommit 2f6fa49faa96ff3c9a92e18451afe0bfa3ec3ddd[m
Merge: 2f6e3c9 959139c
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Fri Jul 11 11:57:37 2014 -0600

    Merge pull request #322 from nathan/piano
    
    Add piano for picking notes

[33mcommit 2f6e3c988ab4b23de53db5bc53fae3e05c1c1a74[m
Merge: 9c9afeb 18ab642
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Fri Jul 11 11:54:39 2014 -0600

    Merge pull request #364 from nathan/prevent-special-names
    
    Prevent using special names (e.g., _mouse_) as sprite names

[33mcommit 4ff43ace207c964b6adf71f41bd534284e471ba1[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri Jul 11 13:47:29 2014 -0400

    Allow switching list name in reporter from context menu

[33mcommit 9c9afebd6772e4875ebc81aee05e0e27c8da1781[m
Merge: cb6296b 9bc0352
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Fri Jul 11 11:53:41 2014 -0600

    Merge pull request #363 from LLK/variable-dialog-line
    
    Remove drawLine() call by default and make it protected

[33mcommit 7e5352c701f8029fdb9f7562c6c8b5e6204a6cb7[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Jul 11 11:49:32 2014 -0600

    Now reading in the ghost value properly in 3d mode

[33mcommit 18ab6422df38037ad2756a0eea84d675ddb75b0f[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri Jul 11 11:54:10 2014 -0400

    Prevent using special names (e.g., _mouse_) as sprite names

[33mcommit 9bc0352192048bd2a1999e06554864383c105773[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri Jul 11 11:48:08 2014 -0400

    Remove drawLine() call by default and make it protected

[33mcommit 959139cad30f9ec2759451154ff326309bedaeca[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri Jul 11 11:25:42 2014 -0400

    Show octave names for Cs

[33mcommit b5fd061bc55c9cdf6ad30a9214e3619819b6d2ad[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri Jul 11 10:20:48 2014 -0400

    Add feedback for adding an existing list; prevent vars/lists with the same name

[33mcommit c9bf3c07fc4d24fefcb075b023206e81dc573fce[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri Jul 11 10:17:26 2014 -0400

    Fix feedback when adding a sprite var which already exists globally

[33mcommit 14413544e15338142f34fdbb4ffa9dd7f6e7868c[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu Jul 10 09:12:51 2014 -0600

    Fixing potential null reference exception

[33mcommit cb6296b740c42500dda97fee77bc199c140426ff[m
Merge: 6fd25dc f3f2e91
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jul 9 14:11:09 2014 -0600

    Merge pull request #326 from nathan/sticky-bitmap-tools
    
    Make grow/shrink tools sticky in bitmap editor

[33mcommit 2282eb659db6263d4a4dace76f478f604fc4cc90[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 9 14:25:14 2014 -0400

    Add missing strings() to Scratch

[33mcommit 6fd25dc3743d3c090dc3542678ec47eddd179298[m
Merge: 925364b 3bbeab5
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 9 13:17:33 2014 -0400

    Merge pull request #305 from nathan/clean-up
    
    Change cleanup -> clean up

[33mcommit 3bbeab5726bac8618520f071db4eaf4d10a2a378[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 9 13:15:00 2014 -0400

    Fix comment

[33mcommit 925364b8d1c07c1d91496e6bb49bc80cc4a8ae7c[m
Merge: 76c5b68 9d09e8c
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 9 13:02:32 2014 -0400

    Merge pull request #311 from nathan/load-progress-size
    
    Fix size of progress box when loading project

[33mcommit 1df4c8c335ba6fe4ff1c94a7a0d6ab4c43e85661[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 17:44:25 2014 -0400

    Allow holding shift to scroll horizontally with the mouse wheel

[33mcommit c845ce49d5ce706a960a132ee21b88f76b1ae461[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 17:38:53 2014 -0400

    Fix picking color from editor background yielding black instead of white

[33mcommit 76c5b68cff639654636574896c42f7a7d61d2d89[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 17:28:13 2014 -0400

    Remove superfluous semicolons

[33mcommit bfd68a9de0ee386450072115da481ab72e6e76ce[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 17:22:58 2014 -0400

    Fix corner rounding in scratch.TalkBubble

[33mcommit 3d274ca71999acfcd7d25b33f203301be2b579ce[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 17:19:58 2014 -0400

    Fix costume center for empty costumes

[33mcommit a26c0ad2d2fca685f3653cdeaa2cb2ee0af1df88[m
Merge: 2571ff7 930dc23
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 16:32:35 2014 -0400

    Merge pull request #258 from nathan/disable-click-to-select-stage
    
    Remove selecting Stage by double-clicking

[33mcommit e8eec3722b1e000bce64e94ba199ca328a23e296[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 15:51:04 2014 -0400

    Fix translating menu items in sprite menus

[33mcommit 18ae040674027aa2724fd43a242ab46f8cccecbe[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 15:38:12 2014 -0400

    Remove duplicate call to Translator.map in ui.media.MediaLibrary

[33mcommit 6dfc2c4d9192ee7418470c50570792e86a10f799[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 15:36:26 2014 -0400

    Remove duplicate call to Translator.map in Scratch

[33mcommit 84f24e675bdc08454a52e455af2555a0bd428ad2[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 15:33:33 2014 -0400

    Remove duplicate call to Translator.map in ui.parts.TabsPart

[33mcommit 7db32b955d396a8f668300394179ef13b0ecd9d4[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 15:04:13 2014 -0400

    Prevent copying procedure declaration blocks

[33mcommit e9b217f31bff3671039329a8e7b57b1942c3b986[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 14:52:33 2014 -0400

    Stop bolding numeric arguments

[33mcommit 75575ab95b5dc6bc6534c749dd43abe6355365ba[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jul 8 11:35:52 2014 -0700

    Comment formatting tweak

[33mcommit 8db2e9df2cc4bf527516aabc26d1521ef8fa15f3[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 14:09:15 2014 -0400

    Fix corner rounding in uiwidgets.ResizeableFrame

[33mcommit f3eef855d32c0488b525d820cb43dc9566e16cd3[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jul 8 11:07:34 2014 -0700

    Allow only one HTTP poll at a time per extension
    
    Without this change, long-running poll requests (such as those resulting in a timeout) can cause arbitrarily long request queues, eventually leading to spontaneous termination of the application.

[33mcommit 045be16cbbdc6481ecbe3e13e809200676304ccc[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 13:56:21 2014 -0400

    Add "any" to key press menu

[33mcommit 6495d9399c02759b385487291b251ca969523e36[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 13:53:57 2014 -0400

    Fix watcher not updating to reflect certain changes

[33mcommit 2571ff74b10dbb59b53e1fc1ab9a79940d07360d[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 13:00:29 2014 -0400

    Fix renaming sounds/costumes to the same name

[33mcommit 9186a82795e2239efe9d998a48b5704d74c1d058[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 11:34:53 2014 -0400

    Fix a typo in uiwidgets.Slider

[33mcommit ed8f758346fc8027567b5612ad809af88e25117c[m
Merge: 03ff600 6b7fbc6
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 11:15:27 2014 -0400

    Merge pull request #309 from nathan/issue/297
    
    Fix choosing colors in 3D

[33mcommit 03ff600871f5f9fb18036d77831d48de4e29b636[m
Merge: dc3e852 eae2d80
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 11:07:14 2014 -0400

    Merge pull request #310 from nathan/delete-recursive-procedures
    
    Allow deleting procedures with recursive references

[33mcommit e371a9222f9058c26ffb6dab03df2a1963c5100e[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jul 8 11:02:56 2014 -0400

    Save scripts and update palette when undeleting a block or comment

[33mcommit dc3e85298152482ef5de68046d8ac560208f8069[m
Author: idreyn <idr@mit.edu>
Date:   Mon Jul 7 16:04:47 2014 -0500

    Further clarifying README

[33mcommit acd1d190d03d6a3790610ad0f306d8f841b46f48[m
Author: idreyn <idr@mit.edu>
Date:   Mon Jul 7 16:04:03 2014 -0500

    Clarifying update to README

[33mcommit c0cbf1d344e1b62a08a84ef702ec7686341867af[m
Author: idreyn <idr@mit.edu>
Date:   Mon Jul 7 15:59:58 2014 -0500

    Update README with recommendation to use 4.11 SDK

[33mcommit 6b7d8de4c475ba4fd62c9314b7a7dbb947a219b1[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jul 7 16:50:21 2014 -0400

    Send key press events for scroll wheel like Scratch 1.4

[33mcommit f3f2e91823e2236a09e3da10e0b728a6a698dce5[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jul 7 16:17:15 2014 -0400

    Make grow/shrink tools sticky in bitmap editor

[33mcommit 9b7499d93f50f76f17dd8f3843264a24d0a7e9b9[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jul 7 15:20:37 2014 -0400

    Fix updating size of scroll frames

[33mcommit fd393de6a4bef1dcb81ba877ca556cf37f084eec[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jul 7 13:09:22 2014 -0400

    Keep zoom and scroll when switching costumes in the image editor

[33mcommit a3215f20d4ebca2be9f8a77f85d56df30b36d63c[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jul 7 12:45:17 2014 -0400

    Allow clicks in space between keys

[33mcommit 5399e4866520f744f5e066d75b45e58bc147eaaf[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jul 7 12:41:58 2014 -0400

    Add piano for picking notes

[33mcommit e8b0cabf1a32f434858cbe3ffa138973bf9d5fac[m
Merge: 931877b 2e305c1
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Jul 3 08:34:14 2014 -0700

    Merge branch 'master' into abstract_external_interface

[33mcommit 7c6125edef3878b7c7f15476bdf8261d85d79e52[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jul 2 13:26:13 2014 -0400

    Increase precision of formatted sound duration to hundredths

[33mcommit c48bc6d0f180af8bdde9108648cbe4c0428ff616[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 30 16:34:40 2014 -0400

    Match protocol more closely for /poll in HTTP extensions

[33mcommit 78557f009b1c9ee291ac4e953c93cf5e1888175a[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 30 11:44:38 2014 -0400

    Prevent deleting or editing list items in player mode

[33mcommit 9d09e8c8583536c70166dc8ec3aed9bea7ef8039[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 30 11:13:59 2014 -0400

    Fix size of progress box when loading project

[33mcommit 2e305c1112f3047f97712d1d9407825b0d3d376a[m
Merge: 6deda07 b420a6f
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 30 11:01:09 2014 -0400

    Merge pull request #256 from nathan/add-costume-offset
    
    Fixed costume center when importing costumes from the library

[33mcommit eae2d809b80822deabc887b78f11c70fa81bc562[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 30 10:41:07 2014 -0400

    Allow deleting procedures with recursive references

[33mcommit 6b7fbc6d7f57cb80d7ebcc20298e53a4724be1f0[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 30 10:17:13 2014 -0400

    Fix choosing colors in 3D

[33mcommit 6deda071e3b4378ff0978b083cac0019d61bf01b[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 30 09:38:09 2014 -0400

    Added MediaInfo.forBackpack

[33mcommit f37172bb99fe08af098b8135d442d40ec4807277[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Sun Jun 29 18:47:08 2014 -0400

    Fixed importing some old blocks

[33mcommit 15522154f73ebb8801d1ecd1e7249c1a20eb52fc[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Sun Jun 29 18:19:57 2014 -0400

    Added importing Scratch 1.4 sprite files (.sprite)

[33mcommit 931877b6a9b10189501d949ca873ce352d59210d[m
Merge: 1fe8d38 415d48b
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Fri Jun 27 15:42:45 2014 -0700

    Merge branch 'master' into abstract_external_interface
    
    Conflicts:
    	src/blocks/Block.as
    	src/extensions/ExtensionManager.as
    	src/scratch/ScratchRuntime.as

[33mcommit 415d48b6c45dbf930fe67fd4dc1128b5704d2fa6[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Thu Jun 26 14:41:45 2014 -0400

    Fixed decoding extension values

[33mcommit 8554da49e2cacb9f4844b3ad19c66a674b90b131[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Thu Jun 26 14:22:30 2014 -0400

    Fixed a missing semicolon in ui.media.MediaInfo

[33mcommit 23ca0897d3dc097b4e78f492a9effaa93996644e[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Thu Jun 26 14:19:28 2014 -0400

    Fixed a typo in watchers.ListWatcher

[33mcommit 3597aa9a49c0417142d38f9873a50b8cdc2145b2[m
Merge: 6b9c051 6cd2e69
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Thu Jun 26 14:17:19 2014 -0400

    Merge pull request #304 from doyousketch2/Typos
    
    Typos

[33mcommit 6cd2e690553e0d8d8c5512820742a7c4a59b0f6c[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Thu Jun 26 08:25:41 2014 -0400

    Update SpriteThumbnail.as

[33mcommit b7267ddcc77092551d50fa8349b0e91077b5e1ca[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Thu Jun 26 08:24:08 2014 -0400

    Update ScratchRuntime.as

[33mcommit 6b9c05175812b2bc98d85f6e0eff3236a9c736e9[m
Merge: b979275 42a8757
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jun 25 20:45:42 2014 -0400

    Merge pull request #306 from nathan/build-status-image
    
    Fixed build status image

[33mcommit 42a8757e8609d4f5512b2344879b62c75d68d46f[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jun 25 20:41:56 2014 -0400

    Fixed build status image

[33mcommit 8ae68c0928e1123aa42fc6ccf43a9f6dab9a3592[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 17:34:43 2014 -0400

    Update ScratchSprite.as

[33mcommit 4b56c722dda5a0296b3301c32847527308a35212[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jun 25 17:01:49 2014 -0400

    Changed cleanup -> clean up in uiwidgets.ScriptsPane and DisplayObjectContainerIn3D

[33mcommit 6bdb60cff63458f95f2bddb4d135e41b2cc28735[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:55:18 2014 -0400

    Update ListWatcher.as

[33mcommit f76f62ba3117a30d1e4cff19027188f7aab7f323[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:53:22 2014 -0400

    Update ObjReader.as

[33mcommit 8491973cedc3f1bf495f74e09d7a765ab343a67e[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:52:30 2014 -0400

    Update ScrollFrame.as

[33mcommit 382aca462dcff8944e38d71ffa3d6fc6279b8361[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:51:42 2014 -0400

    Update IconButton.as

[33mcommit b85889f9b026a0942179ddb949e1762474aa3421[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:51:05 2014 -0400

    Update CursorTool.as

[33mcommit 32a296f7cc3216f15f7a2252304fc9910e2d9740[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:50:25 2014 -0400

    Update StagePart.as

[33mcommit d106d314f389c5528ec0690f5f9ede40647878e9[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:49:12 2014 -0400

    Update ScriptsPart.as

[33mcommit 99d9ad6990aaf759e817fe6a135fc0e0699c1dab[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:48:33 2014 -0400

    Update SpriteThumbnail.as

[33mcommit b8c960bcb973f8a1595102f2465c2e71a5c53ce3[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:47:51 2014 -0400

    Update BlockPalette.as

[33mcommit c07ceeddfd4909bd330b7ade3bf9400746105ac6[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:47:07 2014 -0400

    Update Translator.as

[33mcommit f8805233d03e962eab017bb525165f8799d45af8[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:46:21 2014 -0400

    Update SVGPath.as

[33mcommit 9ef87a2d56079325aa9b7081ded186fc485ab402[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:44:53 2014 -0400

    Update SVGImporter.as

[33mcommit 4d99aef0fd9ebe4365ec564e05c41db26aaa47f7[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:43:15 2014 -0400

    Update SVGDisplayRender.as

[33mcommit ce3f5191835cb2e1841b446c2b20cfee582e44c3[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:41:41 2014 -0400

    Update ObjectTransformer.as

[33mcommit 9501dbfe81277dab291e10aca1c02aff96301b4a[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:38:58 2014 -0400

    Update BitmapEdit.as

[33mcommit 6275e9dbffaf388546fe9218930d3d216753e0ae[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:38:12 2014 -0400

    Update WaveformView.as

[33mcommit b10de09f2dfe3b29ad2f9c1a8887a06fcc3c993e[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:36:12 2014 -0400

    Update WAVFile.as

[33mcommit 7090e7ce35648e5570883c4d211af957795abb2f[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:35:28 2014 -0400

    Update SqueakSoundPlayer.as

[33mcommit 7d9e8e0c14b32fbccc8c08d183afe2db16eca160[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:34:41 2014 -0400

    Update SqueakSoundDecoder.as

[33mcommit 4c7df1013c55d52b0a94e630e22e62a687c477e3[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:34:10 2014 -0400

    Update SoundBank.as

[33mcommit 73ee51ce11f2d3e9eca2268fc99b6bb21d095d06[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:32:45 2014 -0400

    Update NotePlayer.as

[33mcommit 8533f182651f713da0cdbd38869d19fd21f7a34a[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:31:36 2014 -0400

    Update TalkBubble.as

[33mcommit a0fb0f3d5a0215794f8da16041ce5d1e53ff48fd[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:30:45 2014 -0400

    Update ScratchStage.as

[33mcommit 6aa4d4c6522b579b92d32ea14655b5eee4b7ea2e[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:29:15 2014 -0400

    Update ScratchSprite.as
    
    Remembered that tabs should be set to 4 spaces on GitHub web editor.

[33mcommit 52aab9eb38dd4778ba250251015340247009cc84[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:20:22 2014 -0400

    Update ScratchSprite.as

[33mcommit 8acd3387deba6c70fe06aa5248786245750b237f[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:19:10 2014 -0400

    Update ScratchRuntime.as

[33mcommit f081d17cb0452e0abb8b7a849cb792e28cccf7da[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:18:13 2014 -0400

    Update ScratchObj.as

[33mcommit 1d3a07c730bc28b56417f434fc323b2c7b23c0df[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:17:28 2014 -0400

    Update ScratchCostume.as

[33mcommit 90afe92f9a2900e8be973793f083e7b7f4ee41f5[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:15:55 2014 -0400

    Update MotionAndPenPrims.as

[33mcommit 9b22e27ee6a9d18ee41fc751da8e5283be96dce5[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:15:21 2014 -0400

    Update LooksPrims.as

[33mcommit ebef7900bc7754033b3b89a8532d9b1d1ac3307d[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:14:36 2014 -0400

    Update Interpreter.as

[33mcommit d607559bc3b8afef113d49e4f4cc1ca90133299b[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:13:14 2014 -0400

    Update ScratchExtension.as

[33mcommit 8352badd7020a445b86b085ddb35657f5142be5f[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:12:38 2014 -0400

    Update ExtensionManager.as

[33mcommit 672ca8f4852ffb496da1f5435cb892f1de145d6d[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:11:51 2014 -0400

    Update BMPFunctions.as

[33mcommit 2211a7043cb3c5f6ee41278ee3e6b84dede18c95[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:10:19 2014 -0400

    Update BlockShape.as

[33mcommit 0a1a9924e075b91c9818e348c63a7511947cea93[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:08:57 2014 -0400

    Update BlockArg.as

[33mcommit d681a5606ab59e1eacab48f92db5bb7f91e99750[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 14:08:14 2014 -0400

    Update Block.as

[33mcommit 93dfe717833d0782e0d6dd30493ce4262e31b4e5[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Wed Jun 25 13:43:57 2014 -0400

    Update Scratch.as

[33mcommit b979275194072507b20c385161af059defd8c583[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 19:08:10 2014 -0400

    Switched to translated defaults when renaming costumes and sounds

[33mcommit af780f0f74d6499e1dc943b50ed23fa8bc25e8c2[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 19:03:49 2014 -0400

    Switched to using unused names when renaming costumes and sprites

[33mcommit 55652f899ba6bca8fa1c3a65c0b1981c867129df[m
Merge: 746dfd7 4552c5e
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 18:59:43 2014 -0400

    Merge branch 'rename-sound-update-refs'
    
    Conflicts:
    	src/scratch/ScratchRuntime.as

[33mcommit 4552c5e0b0e0c4e9ab72af3e2b1947a0a1732b0a[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 18:56:23 2014 -0400

    Implemented isSoundNameUsed and fixed a copy-paste error

[33mcommit 746dfd739d8cedfa687074bfbee33ad2d99375f2[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 18:49:23 2014 -0400

    Made renameSprite/renameCostume DRYer

[33mcommit 24082315f23d6594d6c1646a35a54f03b8ababc4[m
Merge: 3cfe0db d58074f
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 18:45:44 2014 -0400

    Merge branch 'rename-sprite-update-refs'
    
    Conflicts:
    	src/scratch/ScratchRuntime.as

[33mcommit d58074ff4f90584c86b32e233e10aa6afc896796[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 18:13:13 2014 -0400

    Fixed updating references

[33mcommit f364eaaab4f59a304370033c350b8dfa060d2cd9[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 18:01:03 2014 -0400

    Made empty sprite name turn into Sprite<n> instead of <n>

[33mcommit 3cfe0db587a52c4f415409c43149515aefde9cd3[m
Merge: 74eefd9 5f8401e
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 17:50:02 2014 -0400

    Merge branch 'stop-deleted-scripts'
    
    Conflicts:
    	src/ui/BlockPalette.as

[33mcommit 74eefd99ec4dad5031baebfdbc4f8f3e4c96c5d4[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 17:39:35 2014 -0400

    Normalized whitespace: converted line endings to Unix (\n)

[33mcommit 926df9065df737a3dc3f647f1a317c13462f34e2[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 17:35:27 2014 -0400

    Normalized whitespace: added trailing newlines

[33mcommit eece29a092f796e50741e4ddd2a699e6ac1c9571[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 17:33:18 2014 -0400

    Normalized whitespace: removed extraneous trailing newlines

[33mcommit c5d0b5e6375ac1097c7651d622bea4ec6b1270fa[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 17:31:18 2014 -0400

    Normalized whitespace: removed space on blank lines

[33mcommit 73ce84c772d4b609516b685d2712ccdbeb25ffb2[m
Merge: 6001b87 28bbaf9
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 17:08:02 2014 -0400

    Merge branch 'orphaned-comment'
    
    Conflicts:
    	src/scratch/ScratchRuntime.as

[33mcommit 6001b87fe27b9a4c966ed8de31fdfa256e3f32a7[m
Merge: 6242cbd 210e9dc
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 16:58:09 2014 -0400

    Merge pull request #268 from nathan/else-overflow
    
    Fixed else label overflowing in some languages

[33mcommit 6242cbd14e814ecaf675b16886ace866de47580f[m
Merge: 06cbd80 d21c10f
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 16:57:29 2014 -0400

    Merge pull request #277 from nathan/procedure-editor-label-overflow
    
    Fixed overlap of labels in procedure editor in certain languages

[33mcommit 06cbd80a8cf97ab84a4844cfbb43e8d2cde434b5[m
Merge: b7a180c 15f262c
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 16:42:11 2014 -0400

    Merge pull request #284 from nathan/zoomed-comment-dragging
    
    Fixed comments being scaled incorrectly when picked up

[33mcommit 2ad027362bef110fdeae54c30767349d41bbff78[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 16:26:49 2014 -0400

    Made tabbing algorithm handle command blocks nested as arguments

[33mcommit fa8ccce67b9eded8ea1829154d78fbc9b792b6ee[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 16:14:53 2014 -0400

    Switched to a tabbing algorithm which crosses boundaries between blocks

[33mcommit 99cb9b59bfc29c8491cc46947254eea364e41ff5[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 15:15:46 2014 -0400

    Switched to a do…while loop

[33mcommit ead4f9e7c09d1f85a484e0809e0da09cce1b7dae[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 15:15:34 2014 -0400

    Fixed tabbing for blocks with nested reporters

[33mcommit 7357662fbcd4b0a7a377ccce42f2f526fbbeeb05[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 15:06:13 2014 -0400

    Switched end condition

[33mcommit 3f24263c63fd80d82e6705b609808602b7e95572[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 15:05:51 2014 -0400

    Used the startEditing() method
    
    The old code was doing incorrect things for empty text fields.

[33mcommit b7a180ce8fdbefdcff7c6ae9ff30580541ef011d[m
Merge: 5a66cbf 454c9c4
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 15:00:24 2014 -0400

    Merge pull request #286 from nathan/block-state
    
    Made blocks keep track of their full state when grabbed

[33mcommit 30c9e1a01aee12a7aaf45088c4abb623cafa64d9[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 14:38:35 2014 -0400

    Changed library UI so sprites with empty names and costumes are still visible

[33mcommit 5a66cbffefb1acd8e32a529800968043a2e39ee9[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 14:43:55 2014 -0400

    Fixed whitespace in ui.parts.LibraryPart

[33mcommit 3fd3298c8139d482a7c1def64acf6feee5c86b4d[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 14:43:04 2014 -0400

    Fixed formatting in ui.SpriteThumbnail

[33mcommit 89f28a2e2238ecc049987bc284ecede4dd3e506b[m
Merge: dceb5f6 bf61718
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 14:18:38 2014 -0400

    Merge pull request #214 from nathan/dont-round-costume-center
    
    Fixed rounding costume center coordinates in vector mode

[33mcommit dceb5f64ab2f715020410b392a43c2456860c7b5[m
Merge: b94663a 93f96a5
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 14:13:22 2014 -0400

    Merge branch 'color-picker-drag'
    
    Conflicts:
    	src/util/GestureHandler.as

[33mcommit b94663adfceaf7e9c2209186536d80f15dbe1cfd[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 14:09:30 2014 -0400

    Switched to a ternary conditional

[33mcommit 293b1560b0e9129ce4c653f0fbe3f5c41937b301[m
Merge: 6cd8833 dae0ebc
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 14:09:05 2014 -0400

    Merge branch 'fix-stage-sprite-clicked'
    
    Conflicts:
    	src/blocks/Block.as

[33mcommit 6cd883321545ede224dfe0bc9d5314079bf88893[m
Merge: 7a3c45f 34aac1b
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 13:58:10 2014 -0400

    Merge pull request #183 from nathan/run-while-dragging
    
    Fixed shadow disappearing when a script runs while being dragged

[33mcommit 7a3c45fa2eff5ba6937632a5db263e15a2700e24[m
Merge: 580148c a1da4f3
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 13:39:37 2014 -0400

    Merge pull request #169 from nathan/broadcasts-in-palette
    
    Fixed broadcasts created in palette not being accessible via menu

[33mcommit 580148cbf2059dd6342c34cefe8429359a324a18[m
Merge: 07fc1f4 159e156
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 13:18:23 2014 -0400

    Merge pull request #174 from nathan/backpack-duplicates
    
    Fixed duplication when dragging media into the backpack

[33mcommit 07fc1f4728bf99b74c2297d34b4335f0d3153886[m
Merge: f4a7bb1 f68a2fa
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 13:11:48 2014 -0400

    Merge pull request #177 from nathan/set-var-cache
    
    Fixed incorrect caching in primVarSet and primVarChange

[33mcommit f4a7bb11da9234e4610e6d1dfe30a997600cdc62[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 12:55:53 2014 -0400

    Fixed whitespace in DisplayObjectContainerIn3D

[33mcommit 9ae46145954c4ab39b0313d9627d4b57342b40fe[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 12:52:47 2014 -0400

    Fixed whitespace and formatting in util.SimpleFlvWriter

[33mcommit 3ca6d422323368bf3eec0d4ffc86efd277f5ce61[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 12:43:37 2014 -0400

    Fixed whitespace in soundedit.WaveformView

[33mcommit 453f26559ce5fefaf426af6172b233f9c3a114e3[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 12:42:48 2014 -0400

    Fixed whitespace in blocks.Block

[33mcommit 4019358fbe228ea237cdeebecfdf0047953c12e6[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 12:40:42 2014 -0400

    Fixed whitespace in primitives.SensingPrims

[33mcommit 2d179058533c874f535025c1b8732c98fb350eff[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 12:37:50 2014 -0400

    Fixed whitespace in scratch.ScratchStage

[33mcommit ae0f4f2954503c2376ee30a841799902e9754039[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 12:19:23 2014 -0400

    Moved attribute arrays into constants in scratch.BlockMenus

[33mcommit 20d24f2a63caa2edc5b7eaeba536992b492f5b92[m
Merge: fc957cc 872e7ab
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 12:18:10 2014 -0400

    Merge pull request #248 from djdolphin/validate-attributes
    
    Make attribute block update when switching sprites

[33mcommit 5f8401e846267415221e015b6301cd9da0aaa430[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 24 10:06:01 2014 -0400

    Removed unused reference to app

[33mcommit 3c09f0217c67083b20d90fa5d4763a1ce329969f[m
Author: Amos Blanton <amos@scratch.mit.edu>
Date:   Tue Jun 24 13:44:58 2014 +0000

    Changes to link to design principles of scratch, set limits on new features.

[33mcommit fc957ccd0188ded0c256a484231456f4ec699904[m
Merge: 0d7417b 7469744
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Sun Jun 22 14:01:27 2014 -0400

    Merge pull request #295 from doyousketch2/ListPrims
    
    Update ListPrims.as

[33mcommit 74697446c2c2bc9aec7e7e573d78380ac98628cd[m
Author: doyousketch2 <doyousketch2@yahoo.com>
Date:   Sun Jun 22 06:05:49 2014 -0400

    Update ListPrims.as
    
    Nothing major, just fixed a typo.

[33mcommit fd5edc7f66e7d2a03a1c43224b74b36fbb899cef[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jun 18 09:58:23 2014 -0400

    Fixed not showing run feedback when seeing inside

[33mcommit 34aac1b158a5469412d91fb03ce9476a6768e81a[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jun 18 09:50:42 2014 -0400

    Check that `filters` is truthy

[33mcommit 0d7417b5bd0cff649ac4e6bdf006ef605df28d15[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed Jun 18 15:06:54 2014 +0200

    Bumped version to 420

[33mcommit 111dbeac8e09863b404117259927fa31e2151f11[m
Merge: 0e8f29f 474ec92
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jun 18 12:57:29 2014 +0200

    Merge pull request #279 from nathan/rename-costume-update-refs
    
    Fixed renaming costume breaking references to that costume

[33mcommit 0e8f29f0b91abfff9e341220db8097daf16d3214[m
Merge: 5ca1bca 8bb372c
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jun 18 12:40:18 2014 +0200

    Merge pull request #257 from nathan/slider-min-max-autosave
    
    Fixed setting slider min/max not triggering autosave

[33mcommit 5ca1bca79c46594f97fa9049e20e59044e5cf240[m
Merge: 594c9ac 078d3b3
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jun 18 12:39:13 2014 +0200

    Merge pull request #264 from nathan/change-var-in-palette
    
    Fixed changing variable name in set/change blocks in palette

[33mcommit 594c9ac59909ec88ae3c0d1108b93cc958071e19[m
Merge: 3e3295c 2cdaaf1
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jun 18 12:31:56 2014 +0200

    Merge pull request #272 from nathan/zoom-focal-point
    
    Preserved position of top left of scripting area when zooming

[33mcommit 3e3295ca04ac1fef058144e4e2b816bc08e87966[m
Merge: 9b83662 ab6d301
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jun 18 12:28:19 2014 +0200

    Merge pull request #265 from nathan/local-list-watcher-colon
    
    Added colons to the titles of local list watchers

[33mcommit 9b836624501e26bb76bc22a751df84549088c569[m
Merge: a3427cd 904d56a
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jun 18 12:27:25 2014 +0200

    Merge pull request #251 from LLK/bubble_hide_fix
    
    Fix hiding the 'say' bubble WRT number formatting

[33mcommit a3427cd77d3579782d883319721da9e8e3e1a687[m
Merge: 2527a11 4939b8d
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jun 18 12:25:23 2014 +0200

    Merge pull request #274 from nathan/bitmap-selection-misalignment
    
    Fixed grid for selection and stamp tools in bitmap editor

[33mcommit 2527a113be2c2727b580b0349962286e4eb10b11[m
Merge: 23a285e 4931c42
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jun 18 12:21:07 2014 +0200

    Merge pull request #259 from nathan/fix-pencil-keyup
    
    Fixed pressing keys while drawing with the pencil

[33mcommit 23a285e82c5e9b2b585ba4b22dbbbb705b360803[m
Merge: ca19712 36894e2
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jun 18 12:12:10 2014 +0200

    Merge pull request #261 from nathan/resizing-zoomed-comments
    
    Fixed resizing zoomed comments

[33mcommit ca19712706b2aa6a4e675a21511ace634441b9ff[m
Merge: 2eb84b2 d9f4166
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jun 18 12:11:32 2014 +0200

    Merge pull request #267 from nathan/drop-down-menu-alignment
    
    Fixed alignment of drop-down menus when blocks are zoomed

[33mcommit 2eb84b276d33d835ed820ed47c5f2ec05175f9bc[m
Merge: 35b5563 177a26d
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jun 18 12:09:08 2014 +0200

    Merge pull request #275 from nathan/infinite-position
    
    Fixed setting x or y position to +-Infinity

[33mcommit 35b5563bb7312261cb710dd92d63ad055a407ce0[m
Merge: 2e92451 6b9998a
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jun 18 12:02:28 2014 +0200

    Merge pull request #278 from nathan/rename-variable-fix-layout
    
    Fixed blocks not resizing when renaming variables

[33mcommit 2e92451233be78c79905067afa8207d6eb0c461b[m
Merge: 6d7e9c3 95f7db3
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jun 18 11:57:08 2014 +0200

    Merge pull request #288 from nathan/escape-empty-text
    
    Fixed escape in empty paint editor text field throwing error

[33mcommit 6d7e9c3a0c8e2228fc6ddecf29be0c2075e2e4d4[m
Merge: 3b4cb09 78b224a
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed Jun 18 11:56:25 2014 +0200

    Merge pull request #289 from nathan/stop-in-middle-of-script
    
    Fixed allowing stop block to be placed in the middle of a script

[33mcommit 319e408ced553155d1cf1e8051d2d5b017dbd750[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 17 16:36:06 2014 -0400

    Fixed incorrect run feedback when opening editor

[33mcommit 78b224ab0817fb273a2387b81f22537daf05bea4[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 17 16:23:39 2014 -0400

    Fixed allowing stop block to be placed in the middle of a script

[33mcommit 95f7db3bab4558eab1fefce1c466724eb7b9ff3c[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 17 16:15:59 2014 -0400

    Fixed escape in empty paint editor text field throwing error

[33mcommit 9517ef2555215c5d0a77ad3f4911603bc3e1ce6f[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 17 15:55:17 2014 -0400

    Added autoscrolling while dragging

[33mcommit 454c9c4cc0c8d229563e9e90502c41ebd7cfa7ea[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 17 13:51:08 2014 -0400

    Made blocks keep track of their full state when grabbed
    
    This fixes a number of issues with restoring block state and undeleting blocks.

[33mcommit 997d1c7f32cf023e980697d343f7fae78430317d[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 17 13:08:24 2014 -0400

    Fixed tabbing between inputs in a block

[33mcommit 15f262c5a6676ec3cceb393212cab0b630bfd6be[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 17 12:58:08 2014 -0400

    Fixed comments being scaled incorrectly when picked up

[33mcommit e369c214ace8a7dcf69f6b1e7884070c53893ebf[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 17 12:27:36 2014 -0400

    Fixed renaming sound breaking references to that sound.

[33mcommit 474ec9260eb5ae2af9bc178dac86fb4dd78185a0[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 17 12:22:25 2014 -0400

    Fixed renaming costume breaking references to that costume

[33mcommit 7a201faa47e893430ccc82fa9427c4cf6f0118f4[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 17 12:09:29 2014 -0400

    Removed a trace() statement

[33mcommit 6b9998aa29c4a936bac974c1990aaacd482593e4[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 17 11:56:11 2014 -0400

    Fixed getter blocks not resizing when renaming variable

[33mcommit f07abb9b2a3109f7b58111efc3e3bea9a3e0e266[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 17 11:56:00 2014 -0400

    Fixed block not resizing when switching variable via context menu

[33mcommit d21c10f067681223ed111772b4d735012de8e37c[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 17 11:50:29 2014 -0400

    Fixed overlap of labels in procedure editor in certain languages

[33mcommit 28bbaf9415a806af03334fcb311ea3dbd32dda98[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 17 11:43:31 2014 -0400

    Fixed orphaned comment bug
    
    Comments are now deleted and restored with the blocks to which they are attached.

[33mcommit 177a26d1041f00b7a9aa962057298cb141e2a0d4[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 17 11:14:46 2014 -0400

    Fixed setting x or y position to +-Infinity

[33mcommit 4939b8d6da79731d129db0256459aa649a66e246[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue Jun 17 10:55:17 2014 -0400

    Fixed grid for selection and stamp tools in bitmap editor

[33mcommit 2cdaaf101773ff585f1e72d40399026a4ae32983[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 16 17:07:23 2014 -0400

    Preserved position of top left of scripting area when zooming

[33mcommit 0fa797ffc7f211e53382c6663cf0cd33989739a7[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 16 16:50:34 2014 -0400

    Made text tool sticky

[33mcommit 286a49f40dc10c3b6df645eba1432e883dec8212[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 16 15:55:06 2014 -0400

    Made rectangle and ellipse tools consistently stay selected after creating a shape

[33mcommit 210e9dcf003f717ad44deb1c4b43ccf2a298f863[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 16 14:51:52 2014 -0400

    Fixed else label overflowing in some languages

[33mcommit d9f416672e62c5b5b8995490cab97f64d27883c8[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 16 14:42:39 2014 -0400

    Fixed alignment of drop-down menus when blocks are zoomed

[33mcommit ab6d3011985abb2825aa59d7987bb22ed3699a0d[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 16 13:59:37 2014 -0400

    Added colons to the titles of local list watchers

[33mcommit 078d3b3974ddc3dcee9efe51f7d3f54a5385357e[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 16 13:47:12 2014 -0400

    Fixed changing variable name in set/change blocks in palette

[33mcommit bf9ce4a865d29e751d630635a0e0098b53a74263[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 16 13:43:18 2014 -0400

    Prevented duplicate sprite names

[33mcommit 716c06437916e4a5614b68e059cac76ce99168c8[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 16 13:42:36 2014 -0400

    Removed a trace() statement

[33mcommit 13c6a735a83131ec2c2d10654b4cb5281ae05a7a[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 16 13:38:33 2014 -0400

    Added a semicolon

[33mcommit 4f89b18d5a429cbbd62e1b7b8416b7b8fbf4ac28[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 16 13:02:19 2014 -0400

    Fixed scripts running after they were deleted and added delete item to procedure hat context menu

[33mcommit fcb9751417674856fe9489d86d97b65c0aaf1a43[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 16 12:15:06 2014 -0400

    Fixed renaming sprite breaking script references to that sprite

[33mcommit 36894e20b087c1a5598fa9fb175223f43e291717[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 16 11:52:49 2014 -0400

    Fixed resizing zoomed comments

[33mcommit cc6c81be9e38c949c7d26e865843ced92a563d33[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 16 11:31:26 2014 -0400

    Prevent creating a global variable with the same name as a local one
    
    This also adds a dialog box explaining why the variable could not be created.

[33mcommit 4931c427f4f5637425b93223c390606577b40d8d[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 16 11:14:52 2014 -0400

    Fixed pressing keys while drawing with the pencil

[33mcommit 930dc23c4e577b633cf55962483824d1d37b293b[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 16 11:10:19 2014 -0400

    Removed selecting Stage by double-clicking

[33mcommit 8bb372c3fbb6c032f9a5ba637e88280bc442e5a8[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 16 11:03:35 2014 -0400

    Fixed setting slider min/max not triggering autosave

[33mcommit b420a6f05ee98a12ab1810f2379f0ebd94a19161[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 16 10:41:00 2014 -0400

    Fixed costume center when importing costumes from the library or importing images into the bitmap editor

[33mcommit 3b4cb09f93b3880b4eb152fe52244e7be51f2329[m
Merge: 5132c96 e0cdc38
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu Jun 12 17:09:05 2014 -0600

    Merge pull request #254 from nathan/letters-category
    
    Added "Letters" category to media library

[33mcommit e0cdc385171d9d47c293328b03cd49001815100f[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Thu Jun 12 18:43:33 2014 -0400

    Added Letters category to media library

[33mcommit 5132c96eb27c4277e3de9aef4809fc9c79740e0b[m
Merge: 0e44a73 c3df7dc
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu Jun 12 16:04:26 2014 -0600

    Merge pull request #243 from nathan/wrap-c-in-stack
    
    Allow wrapping C blocks in the middle of a stack

[33mcommit 1fe8d3813cf14c33c30b4d3165564dde42a7474a[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Jun 12 13:41:57 2014 -0700

    Use block spec for forcing requesters
    
    In the offline editor, we need to force extension reporters to act as requesters. The previous method of doing so was unreliable because it didn't cover some paths through which blocks can be cloned and recreated; some of those paths didn't have enough information to know that the block they being handled is an extension reporter. This new method modifies the block spec on extension load, so it affects any block created through any path.

[33mcommit 816fa3b3982f356401d4e95dbc0ba8eace334959[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Thu Jun 12 10:07:52 2014 -0700

    Removed two unnecessary trace() calls

[33mcommit 0e44a7389a621c4cfae9446cd2cd458e6ec74b67[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Jun 11 20:17:51 2014 -0400

    Fixed costume center button being too far to the right

[33mcommit 904d56ae5555e08c75aac1a0bc5b786aeb43c187[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jun 10 14:37:43 2014 -0700

    Use GestureHandler as source for bubbles it creates
    
    Shane explained that it would make more sense to use the GestureHandler
    as the source for these particular TalkBubble instances.

[33mcommit da4d6764ed8e4efd372be3a97d413033dd9b8184[m
Merge: 860db6f 549a9d2
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jun 10 13:46:26 2014 -0700

    Merge branch 'bubble_hide_fix' into abstract_external_interface

[33mcommit 860db6f7179df499c31cd3cabb7908f60beedfbc[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Tue Jun 10 09:14:57 2014 -0700

    Treat offline extension reporters as requesters
    
    Since StageWebViewBridge calls can't return values directly, extension
    reporters must all be treated as requesters. This change adds a
    "forcedRequester" flag to do so.
    Note that there is at least one case where a block can be duplicated and
    the forcedRequester flag will be dropped. This must be fixed if we
    continue to use this method.

[33mcommit 549a9d25a731d07d3d62b233571c43bcc2103c61[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Jun 9 16:44:17 2014 -0700

    Fix hiding the 'say' bubble WRT number formatting
    
    When checking whether to hide the speech bubble, test if this block is the block that originally displayed the bubble rather than testing to see if the text matches. This avoids problems due to differences in text formatting or changes in a reporter's value.

[33mcommit 88d424cf4f93d2ad559e6fd348f53016bb396a6d[m
Merge: 6808000 126e7cd
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Mon Jun 9 16:47:39 2014 -0700

    Merge branch 'master' into abstract_external_interface

[33mcommit 126e7cdf1652349abd9ec69bfdb34f2cf335fd10[m
Merge: 18172eb ec1d490
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Jun 9 17:02:43 2014 -0600

    Merge pull request #250 from djdolphin/record-sound
    
    Added "record..." to sound menu... Thanks @djdolphin!

[33mcommit ec1d490517e4f3d858161d41d6b806eaade55f39[m
Author: djdolphin <creative4ever@rocketmail.com>
Date:   Mon Jun 9 14:37:47 2014 -0400

    Fixed
    
    I broke this before I committed it.

[33mcommit 872e7ab45092b9af8808718c9c2b31e0531706f1[m
Author: djdolphin <creative4ever@rocketmail.com>
Date:   Mon Jun 9 14:03:30 2014 -0400

    Revert "Use translated default values"
    
    This reverts commit 0c7de21dc3b1092d055b9bf294280a64431f856b.

[33mcommit 77b37881874c55d191284aa06f62cdf8088d3edd[m
Author: djdolphin <creative4ever@rocketmail.com>
Date:   Mon Jun 9 13:42:01 2014 -0400

    Added "record..." to sound menu

[33mcommit 0c7de21dc3b1092d055b9bf294280a64431f856b[m
Author: djdolphin <creative4ever@rocketmail.com>
Date:   Mon Jun 9 13:09:33 2014 -0400

    Use translated default values

[33mcommit 92d77bc6e37758c5731023103677a6af5ccaca85[m
Author: djdolphin <creative4ever@rocketmail.com>
Date:   Mon Jun 9 07:04:15 2014 -0400

    Changed "allowed" to "valid"
    
    I think it makes a little more sense.

[33mcommit 8267f2415554a785b2cdd85e9346eecbce8cbeec[m
Author: djdolphin <creative4ever@rocketmail.com>
Date:   Sun Jun 8 14:05:17 2014 -0400

    Shortened the code a little

[33mcommit e13120da3f506de3b6da0255de91754bbb76386e[m
Author: djdolphin <creative4ever@rocketmail.com>
Date:   Sun Jun 8 13:58:21 2014 -0400

    Made attribute block update when switching sprite
    
    If the sprite you switch to doesn’t have an attribute or variable, it
    will set the attribute to the default one for sprites or the stage.

[33mcommit 18172ebf1bb0bb0c5036811acc12080e1d8adf87[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Jun 6 15:17:41 2014 -0600

    Error reports show that sometimes proto is not the child of stagePane

[33mcommit f3539b9d4a16e4243fdde9852f86ad625ffad1fb[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Jun 6 14:45:01 2014 -0600

    Now supporting retina displays

[33mcommit 3ee7bd3531f255bfda79f0009ba80c19b6542100[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Jun 6 14:42:20 2014 -0600

    Prevent handing NaN to the BitmapData constructor

[33mcommit 82185a53e90c580006dd057f58c27f4cf221b4e3[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri Jun 6 14:19:28 2014 -0600

    Added null check in case the user denied access to the microphone.

[33mcommit 31323c2ecae55d0ce3c07246f22b72ad9e8baa06[m
Merge: 2028bb6 e016af6
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Fri Jun 6 12:20:31 2014 -0600

    Merge pull request #244 from nathan/fix-terminal-insertions
    
    Fixed allowing terminal block insertions at the top of substacks

[33mcommit e016af6ab2343563cca2b14a7cd3bf9d2ccddfb3[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri Jun 6 13:50:48 2014 -0400

    Fixed allowing terminal block insertions at the top of substacks

[33mcommit c3df7dcd5abc1df2d7e045a1a19cfcc43852b7da[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri Jun 6 12:54:17 2014 -0400

    Allow wrapping C blocks in the middle of a stack

[33mcommit 6808000d9de5125e468aa4de711ca051d79ea83a[m
Author: Chris Willis-Ford <cwillisf@acm.org>
Date:   Wed Jun 4 16:02:12 2014 -0700

    Abstracted ExternalInterface
    
    Added abstract methods for ExternalInterface features.
    Refactored code to work with callbacks instead of expecting externalCall
    to return a value directly.
    Note that this change will break both the online and offline editor
    until corresponding changes on those repositories.

[33mcommit 2028bb6f543f5822778088723843d1312e6feed0[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed Jun 4 11:00:38 2014 -0600

    Fixed memory leak from copyPixels()

[33mcommit 57ffd680dfbe198f7c4c6dca14ebf45d48fc655c[m
Merge: 678aac9 ff6be6a
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jun 3 13:51:49 2014 -0600

    Merge pull request #210 from nathan/import-newlines
    
    Fixed importing files with CRLF or CR line endings

[33mcommit 678aac9546b42221fdeee4b440e3ee63e40621a3[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue Jun 3 10:20:02 2014 -0600

    Fixed a duplicate variable definition warning.

[33mcommit 3c9f132391e70f38f2db09481e7f84b5fa58e3bd[m
Merge: cb1965d bd55726
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jun 3 10:15:55 2014 -0600

    Merge pull request #190 from nathan/gif-decoder
    
    Fixed formatting and dispose handling in GIF decoder

[33mcommit cb1965db672e52a06f306c384a74f968dd32adc7[m
Merge: e5eed25 82d9ec3
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jun 3 10:11:14 2014 -0600

    Merge pull request #167 from nathan/stop-palette-scripts
    
    Fixed scripts in palette running after category is switched

[33mcommit e5eed25566c2c893559b3fbd8de33693dabc83f6[m
Merge: f3dd8f4 caf4d41
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jun 3 10:10:00 2014 -0600

    Merge pull request #163 from nathan/urlencode
    
    Properly urlencode extension block selectors and inputs

[33mcommit f3dd8f4165b33f6db822418d9452ee506f1b62e4[m
Merge: 64b4df3 edcf1ed
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jun 3 10:07:31 2014 -0600

    Merge pull request #168 from nathan/terminals-in-substacks
    
    Fixed spacing in C blocks whose substacks end with terminals

[33mcommit 64b4df39681c656e9e436d658511496656535085[m
Merge: 09b32a2 35319a5
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jun 3 10:05:46 2014 -0600

    Merge pull request #170 from nathan/menu-lines
    
    Fixed variables named "---" not appearing in menus

[33mcommit 09b32a2dd6a36d0f0c38b0baddf0a5f5c8d604f4[m
Merge: aa5592c c4860a9
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jun 3 10:03:08 2014 -0600

    Merge pull request #193 from nathan/hidden-context-menu
    
    Fixed context menus showing for hidden lists on the stage

[33mcommit aa5592c9ac668af64c71c9516ca087c7ad5e72a5[m
Merge: f64a6bb c5b1b60
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jun 3 10:02:17 2014 -0600

    Merge pull request #219 from nathan/library-import-button
    
    Added button to import costume from library

[33mcommit f64a6bb829e12805c28664a6591bb71c2702329c[m
Merge: e41f6e6 542311b
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jun 3 10:01:06 2014 -0600

    Merge pull request #223 from nathan/bubble-zoom
    
    Fixed bubbles not appearing at right edge of block when zoomed

[33mcommit e41f6e635820ab01df5dc7ffa77bd9304801405d[m
Merge: 560d677 dc8b31a
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jun 3 10:00:30 2014 -0600

    Merge pull request #226 from nathan/list-watcher-checkbox
    
    Fixed watcher checkbox when hiding list from context menu

[33mcommit 560d677feb52027461a4dae905e3dea92931d02f[m
Merge: 61ce01e 7ea4f24
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue Jun 3 09:58:56 2014 -0600

    Merge pull request #229 from nathan/min-list-watcher-size
    
    Increased minimum list watcher size

[33mcommit 542311b1da2b91f3c34a822dd98d284222645323[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon Jun 2 19:19:35 2014 -0400

    Switched to a nicer way of computing scaled width
    
    Thanks, Shane.

[33mcommit 61ce01e849fc2b3e8876b2822681c46e9e38695a[m
Merge: 54c325a 1e9af83
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon Jun 2 15:29:21 2014 -0600

    Merge pull request #232 from cpseager/master
    
    Fix bug #140

[33mcommit 54c325a10c9e4ee69261c0f04652ab9ce4483e0f[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon Jun 2 15:21:11 2014 -0600

    Now updating the bitmap during rotations.

[33mcommit 1e9af83aa464b8faa7cfd06f699f4ac07a4f6899[m
Author: scraxe <cpseager@users.noreply.github.com>
Date:   Mon Jun 2 11:04:01 2014 +0100

    Added http success msg
    
    http extensions cannot currently display a meaningful 'green dot' msg
    such as 'WeDo connected' as the javascript extensions can. Therefore add
    an http ext.success msg in an identical style to the existing 'yellow
    dot' ext.failure msg.

[33mcommit 9b4b1d1f072204d078acc8bbf4c200690aa7a537[m
Author: scraxe <cpseager@users.noreply.github.com>
Date:   Mon Jun 2 10:48:31 2014 +0100

    Fix bug #140
    
    Allow #376 to process a httpCall for http extensions by not previously
    setting firstTime true for 'w' block.

[33mcommit 4e0e83b479090da224a22943a5bf8797a89691be[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Sat May 31 23:05:49 2014 -0600

    Fixed MP3 conversion logic

[33mcommit 886e4822396b4ba5ac39fd8af575ca7887a64bf3[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Sat May 31 22:49:33 2014 -0600

    Optimized content update from textfield chnage event.

[33mcommit bcc3c5ea2f5a1387f420cd7a752e9710566ebeb8[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri May 30 23:39:16 2014 -0400

    Updated a comment in Interpreter.as
    
    It was really out of date.

[33mcommit b66fd78b2045000078c46533e289212807264e22[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri May 30 14:14:08 2014 -0400

    Fixed a bug with lists that display only two visible items

[33mcommit 7ea4f248a7e9cb9630c2f11f15e0729998e92fc9[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri May 30 14:06:52 2014 -0400

    Increased minimum list watcher size

[33mcommit dc8b31a75173ed5596766592116657a5ad19d1a2[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Thu May 29 13:38:53 2014 -0400

    Fixed watcher checkbox when hiding list from context menu

[33mcommit 3a6bce1efcaaf51a4fcf091b395f4f3de689488f[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Thu May 29 01:53:09 2014 -0400

    Fixed bubbles not appearing at right edge of block when zoomed

[33mcommit 8c0a53054a5711d5c9fabf2f1f0dc7b3a2dd8a41[m
Merge: b594f97 2f3969b
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed May 28 17:05:20 2014 -0600

    Merge pull request #222 from nathan/list-delete-button
    
    List delete button

[33mcommit 2f3969bd92255d139434b3bf0da9c2ca2cf96194[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 28 18:25:33 2014 -0400

    Fixed delete button showing on read-only lists

[33mcommit b594f971e3be60f395fbeaf600042597b4fb9615[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 28 18:53:12 2014 -0400

    Better fix for list tabbing

[33mcommit bbbd5e5039c77cf9ea8fd559a5296c84cea521f8[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 28 18:33:23 2014 -0400

    Fixed tab skipping items in online player

[33mcommit 01a711674a5547f6b3a98d81332d68d51c2a6877[m
Merge: 9ad9ffc e63fef2
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 28 18:15:05 2014 -0400

    Merge branch 'master' into list-delete-button
    
    Conflicts:
    	src/watchers/ListCell.as

[33mcommit 9ad9ffc9102c60604386e3c1a61531c20685e16d[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 28 18:11:11 2014 -0400

    Added a delete button to list cells
    
    This button can only be pressed when the cell is focused. There was an annoying bug in Scratch 1.4 where you could delete cells just by clicking on the empty space on the right side of the cell.

[33mcommit c5b1b60ae9246a6253ce43b34495ace4106dc906[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 28 17:24:02 2014 -0400

    Added button to import costume from library

[33mcommit e63fef2c4487b74b1fc605312c7aac3785b764cc[m
Merge: 54d6c27 a9366c9
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed May 28 15:09:54 2014 -0600

    Merge pull request #217 from nathan/nicer-list-highlighting
    
    Made list item highlighting more like 1.4

[33mcommit a9366c98213d2bf12a5d17ca8b1cb606bed5ea86[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 28 16:33:10 2014 -0400

    Made list item highlighting more like 1.4

[33mcommit 54d6c275e3031212605a6f637b5754217c27cd06[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed May 28 14:09:50 2014 -0600

    Bumped version to 419

[33mcommit 464401fadade93b914f7bb5e48ad172c7d960a74[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed May 28 13:44:26 2014 -0600

    Now showing (empty) for empty lists.

[33mcommit d3c17cb714cddd410003f41009ba06f2d998d611[m
Merge: 37286d5 0902bc0
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed May 28 13:33:07 2014 -0600

    Merge pull request #215 from nathan/bubble
    
    Added speech bubble with value of reporter when clicked

[33mcommit 37286d5e764e2009cd2c971245f2f0b03e9c0699[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed May 28 13:31:34 2014 -0600

    Added visual indication for list item focus.

[33mcommit bf9f382bc005428e9c31ec953b048ad155b197d3[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Wed May 28 13:18:07 2014 -0600

    Tweaked rounding of numeric values in watchers

[33mcommit 0902bc072df8fc5d8b69a65c14f5701b37a734ee[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 28 15:17:27 2014 -0400

    Switched app.mouseX/Y -> stage.mouseX/Y

[33mcommit ebcd6fe9047a0a83c8fe625ec47645cf0d596c37[m
Merge: b54c367 4aeeda9
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed May 28 12:50:27 2014 -0600

    Merge pull request #176 from nathan/save-stage-picture
    
    Added screenshot item to Stage's context menu

[33mcommit b54c367e40e4ce7027e4c98c30d33f00eef705cf[m
Merge: 5f9be6a 093d725
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed May 28 12:27:41 2014 -0600

    Merge pull request #211 from nathan/list-navigation
    
    Improved list navigation

[33mcommit bf617185c65137ce0aa11ddbe098d94aed2194ce[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 28 14:16:14 2014 -0400

    Fixed rounding costume center coordinates in vector mode
    
    This also doubles the resolution of the bitmap costume center tool so that it lines up with the actual pixels of the image.

[33mcommit 5f9be6a0b7c979fb5f04e7ed476e745d7283eaf2[m
Merge: b858d02 ab09998
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed May 28 11:37:15 2014 -0600

    Merge pull request #212 from nathan/list-item-rounding
    
    Fixed display of numbers in list watchers

[33mcommit ab09998c46a429c82406ca53f586e783e9792bfd[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Tue May 27 16:04:10 2014 -0400

    Fixed display of numbers in list watchers
    
    Numbers are now rounded to three decimal places like they are in variable watchers.

[33mcommit 093d7250395a48014377c8e6a2f880ac3ad2deb6[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon May 26 18:51:17 2014 -0400

    Improved list navigation
    
    up/shift+tab: select previous item
    down/tab: select next item
    enter: insert item below selection
    shift+enter: insert item above selection

[33mcommit ff6be6a5d1bcb6ba44106f60da9b72425f08f917[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Mon May 26 16:28:24 2014 -0400

    Fixed importing files with CRLF or CR line endings
    
    Also added final LF to exported file. This is the convention.

[33mcommit b858d029dc67f0f03a427a461080ca78232ed183[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri May 23 15:48:24 2014 -0600

    Made a method for removing the text buttons.

[33mcommit 909d541ee9f86e037a42ecbb6b03a82369e331a1[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri May 23 09:01:40 2014 -0600

    Now fixing up stopScripts blocks

[33mcommit f651a90556bc7443d56327caec7814c1c50f5f6f[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri May 23 08:26:35 2014 -0600

    Bumped version to 418

[33mcommit 2e5e2816dbb72475c84ace446c33882bdc4742bc[m
Merge: 158895b 3abb80d
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Fri May 23 08:25:27 2014 -0600

    Merge pull request #205 from nathan/this-script
    
    Fixed "this script" -> "other scripts in sprite" bug

[33mcommit 3abb80df1a59af680cd1d16266d3db8953155fb5[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri May 23 08:04:51 2014 -0400

    Fixed "this script" -> "other scripts in sprite" bug

[33mcommit 158895baf91fa7c674879d185b46d0a6bdba3fae[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu May 22 15:01:16 2014 -0600

    Now loading extension docs in the tips window.

[33mcommit 43269ddaf9c5d1710fad91d2ec436d9e6b31fc4c[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu May 22 14:08:46 2014 -0600

    Fixed boolean javascript extension reporters.

[33mcommit 02622918a85b7f0dd64f26f1e53419314194e52b[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu May 22 13:23:05 2014 -0600

    Now always using Scratch.createMediaInfo() to create MediaInfo instances.

[33mcommit c04d4791292d04b04c1809679b22e2ffdf4ca2af[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue May 20 11:50:28 2014 -0600

    Added a way to override what type of PaletteBuilder is used.

[33mcommit dee48521dc4053f1c6d467a849241524e3a37e0e[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Tue May 20 10:55:27 2014 -0600

    re-enabled blocking argument check

[33mcommit 4b517cf8c1c89c9c693189073f280e84dbd0a349[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Fri May 16 12:41:25 2014 -0600

    Enabled pico extension

[33mcommit d01bacacfb21a47526b0db9c0713b713f28da7ce[m
Merge: b337bd2 5745884
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu May 15 11:02:31 2014 -0600

    Merge pull request #196 from sclements/master
    
    Add a build status icon to README and HipChat notifications

[33mcommit 5745884bc8116e5e8aa2f7fac9e7fc2c3c50b770[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu May 15 10:45:19 2014 -0600

    Added HipChat notifications for the Scratch Team

[33mcommit db52851a88420b838cc1b0a6d4031c1b035d0d20[m
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu May 15 10:40:04 2014 -0600

    Added build status image

[33mcommit b337bd20f8312a76ea0ced0ff20cfa1ffec02406[m
Merge: f889a7f 9cc352d
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Thu May 15 10:11:29 2014 -0600

    Merge pull request #195 from sclements/master
    
    Add configuration and a script to auto-build with travis-ci

[33mcommit 9cc352d51c2092f690ba29147ec6e3f814ac2d39[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu May 15 09:56:44 2014 -0600

    Added package caching and fixed 'main' in package.json.

[33mcommit 1ad8ed483670e002b8e7b0dad7b0bbf5863cb632[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu May 15 00:08:50 2014 -0600

    removed whitespace

[33mcommit 98b538631fbba3962cbb7a9b47f631dec99d6610[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Thu May 15 00:03:06 2014 -0600

    Added travis build config and js

[33mcommit f889a7fcebed8bfe15f94d6c54b8255e8873e872[m
Merge: 2fb909d f2d1fba
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed May 14 15:28:04 2014 -0600

    Merge pull request #194 from nathan/list-tabbing
    
    Fixed tabbing between list cells

[33mcommit f2d1fba5d11ed82addcb6ea7dfd4e71c2649ddcd[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 14 16:42:03 2014 -0400

    Fixed tabbing between list cells

[33mcommit c4860a9aef0c6a4fdc0a77b7b6245e2503430322[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 14 16:23:41 2014 -0400

    Fixed context menus showing for hidden lists on the stage

[33mcommit 2fb909d39e8fd7758d853b34545e46f281a012cb[m
Merge: 2512a14 e9bfd51
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed May 14 13:30:21 2014 -0600

    Merge pull request #187 from nathan/stop-stage-sprite
    
    Fixed stop block label for "other scripts in sprite/stage"

[33mcommit 2512a14c3dac3c69e3b636e0307d0cc217e0f527[m
Merge: 7217d8c 7ee13c4
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed May 14 13:28:35 2014 -0600

    Merge pull request #191 from nathan/save-on-cleanup
    
    Trigger a save when scripts are cleaned up

[33mcommit 7217d8c0cae89b7bb1261022ed9d2dae894e351c[m
Merge: 206d4df e99e649
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed May 14 13:28:06 2014 -0600

    Merge pull request #192 from nathan/transate-self-mouse
    
    Fixed translation of "edge", "myself", "Stage", and "mouse-pointer" in block inputs

[33mcommit 206d4dfbf07ab46e24965d2d4649e95591613438[m
Merge: 3a70350 9c7f740
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed May 14 13:27:18 2014 -0600

    Merge pull request #178 from nathan/radial-gradient
    
    Updated bitmap radial gradient fill to match vector radial gradients

[33mcommit e99e649571cdec7a190a29467e7386c877694319[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 14 15:26:00 2014 -0400

    Fixed translation of "edge", "myself", "Stage", and "mouse-pointer" in block inputs

[33mcommit 3a70350043f37cbe80a3eb9bd0a68d8e0ad2c1bf[m
Merge: 27d5ec8 45fb50a
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed May 14 13:25:59 2014 -0600

    Merge pull request #171 from nathan/rename-fix
    
    Fixed renaming procedures and variables

[33mcommit 27d5ec860d4d9082a729df8799ce4b774bc5dd3f[m
Merge: d8f4724 6b6c202
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed May 14 13:19:06 2014 -0600

    Merge pull request #166 from nathan/duplicate-comment-offset
    
    Fixed duplicated comments being offset from cursor

[33mcommit d8f4724a12416cc7d53f84a5edca07ff91aa2dd7[m
Merge: 84b3843 33add3e
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed May 14 13:15:51 2014 -0600

    Merge pull request #165 from nathan/palette-spacing
    
    Fixed palette spacing on More Blocks category

[33mcommit 84b3843ca12c970923be481c7a0bc83ea083a852[m
Merge: 05e0260 8aeb0ee
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed May 14 13:14:43 2014 -0600

    Merge pull request #164 from nathan/drag-by-title
    
    Made dialogs draggable by their titles

[33mcommit 7ee13c4fc650c1ec7607b0d0b0fa158555401b35[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 14 15:05:59 2014 -0400

    Trigger a save when scripts are cleaned up

[33mcommit 05e02607809db73298529c948221ec1a7f4b439b[m
Merge: 1f07eb1 2f38cde
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 14 14:45:53 2014 -0400

    Merge pull request #172 from nathan/commet-typo
    
    Fixed a typo ("Commet" => "Comment")

[33mcommit bd5572656c4aaa0d9b3fb76798fd7eb2c2f6e270[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 14 14:41:23 2014 -0400

    Fixed a bug

[33mcommit 452c9672a9f19bd0d2698d7c2142ff01294f9996[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 14 14:27:51 2014 -0400

    Fixed formatting and dispose handling in GIF decoder

[33mcommit 93f96a5a9205b02262f79f8711b449e231cc45ca[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 14 12:39:18 2014 -0400

    Fixed not being able to drop block when color picker was under mouse

[33mcommit 1f07eb1d39e28e6ff0668e4cccde4aaf627dff0a[m
Merge: ab25a08 efd4600
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Wed May 14 10:03:23 2014 -0600

    Merge pull request #188 from nathan/duplicate-ask
    
    Fixed ask prompting multiple times for the same script

[33mcommit efd46002bf606384b30cf67bff3d1f30b18c0973[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 14 09:54:51 2014 -0400

    Fixed ask prompting multiple times for the same script

[33mcommit e9bfd514c7212f29adbbd32b2aafc8c7182fae0c[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 14 09:05:00 2014 -0400

    Fixed stop block label for "other scripts in sprite/stage" when dragging between a sprite and the stage and between the backpack and a sprite or the stage

[33mcommit dce40acfd28ab5ea74530f2312bdb921ad853a7a[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 14 03:28:27 2014 -0400

    Added a default implementation for the username block when offline

[33mcommit dae0ebcbcf174b89964f6c1e00d0abcacc42267d[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 14 03:21:59 2014 -0400

    Fixed dragging "when Stage clicked" into a sprite

[33mcommit 0556bcfe0df768507dd9fb06ee9a6186305affe3[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 14 03:07:16 2014 -0400

    Fixed shadow disappearing when a script runs while being dragged

[33mcommit 80c2e8383c4420eab7a562e32396ddd0837de758[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 14 01:33:31 2014 -0400

    Updated procedure spec editor label font to match block label font

[33mcommit ab25a08ef4d1cdcd4fe01ffd2515628a08e6de5f[m
Merge: 9be7d2e 3af3947
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Tue May 13 11:59:45 2014 -0600

    Merge pull request #173 from nathan/context-menu-info
    
    Added "info" menu item to sprite context menu

[33mcommit 9c7f740b719d1b62bc2f987a91987de2bb8265d3[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Sun May 11 17:38:54 2014 -0400

    Updated bitmap radial gradient fill to match vector radial gradients

[33mcommit f68a2fa134dcd051dd860ff3f3ba59b21661cf44[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Sun May 11 15:45:26 2014 -0400

    Fixed incorrect caching in primVarSet and primVarChange

[33mcommit 4aeeda9f43fd56b79062f178518842e7ac57ebbb[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Sat May 10 20:03:54 2014 -0400

    Added screenshot item to Stage's context menu

[33mcommit ca09a56cbbe0ed7489534faab0a9892a1cb4464c[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Sat May 10 19:16:04 2014 -0400

    Added speech bubble with value of reporter when clicked

[33mcommit 159e156d26d3605fd2a9b5d7360d2061072aa97d[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 7 15:11:16 2014 -0400

    Fixed duplication when dragging media into the backpack

[33mcommit 3af3947ae35a3bd93826c1aef787a11669d57626[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed May 7 14:23:18 2014 -0400

    Added "info" menu item to sprite context menu

[33mcommit 2f38cde712d9783d047e41a1287d14e64d00515f[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Thu May 1 15:09:20 2014 -0400

    Fixed a typo ("Commet" => "Comment")

[33mcommit 45fb50a3bfe5ad76ffcab3ce52e773afe6494765[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Thu May 1 13:25:07 2014 -0400

    Fixed procedure renaming

[33mcommit 68f5d051cd637ee99057829ac469a1f33b3127f4[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Thu May 1 13:03:54 2014 -0400

    Fixed variable renaming

[33mcommit 35319a54d369dfbdb21764aeb56394f541027351[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Thu May 1 11:18:30 2014 -0400

    Fixed variables named "---" not appearing in menus

[33mcommit a1da4f304c5c84373acc9399dfd161da13ddb8e0[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Thu May 1 11:10:48 2014 -0400

    Fixed broadcasts created in palette not being accessible via menu

[33mcommit edcf1ed8c0903ccf5289cb13c27f9ecee2a533f5[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Thu May 1 11:00:03 2014 -0400

    Fixed spacing in C blocks whose substacks end with terminals

[33mcommit 82d9ec31ce5e676f5f3232d6dd8f7cf1e658df08[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Thu May 1 10:52:06 2014 -0400

    Fixed scripts in palette running after category is switched

[33mcommit 6b6c2024112f01d5a5e612c383dfb71ec0cfdd03[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Thu May 1 10:25:36 2014 -0400

    Fixed duplicated comments being offset from cursor

[33mcommit 33add3ea38fd6a9d558d50efad726418f75d114a[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Thu May 1 10:16:36 2014 -0400

    Fixed palette spacing on More Blocks category

[33mcommit 8aeb0eed975e0962d54346e08a6c8e39e65220a9[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Thu May 1 09:51:02 2014 -0400

    Made dialogs draggable by their titles

[33mcommit caf4d419f07f809007e3388f4b92a809c2cefca7[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Apr 30 20:10:25 2014 -0400

    Fixed partially-encoded state variables in poll and getStateVar

[33mcommit 91ec43c46f4e052a0a069b50d835368374984b78[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Wed Apr 30 20:02:52 2014 -0400

    Switched to generic whitespace for poll parsing

[33mcommit a02e849daf7be04135bd2712bd1c64a47898d945[m
Author: Nathan Dinsmore <nfdins@gmail.com>
Date:   Fri Apr 25 23:05:10 2014 -0400

    Properly urlencode extension block selectors and inputs

[33mcommit 9be7d2e86e5c90a1c1d6460a0049ae307f1d74b0[m
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon May 12 11:20:26 2014 -0600

    Update README.md
    
    Improved style consistency

[33mcommit f8990d23010feba3f74bc8266ef12dc6d4e05b54[m
Author: Ray Schamp <ray.schamp@gmail.com>
Date:   Mon May 12 13:14:46 2014 -0400

    Add instructions for downloading and moving playerglobal.swc files.

[33mcommit f56c3c3adbd270a3ac5ca36d3f768ccf8b27eada[m
Author: Ray Schamp <ray.schamp@gmail.com>
Date:   Mon May 12 13:09:19 2014 -0400

    Ignore local.properties.

[33mcommit 863411406d1bbfaa95980312ef02a63e8c1dbc4f[m
Merge: db073c9 490c045
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon May 12 11:05:22 2014 -0600

    Merge branch 'master' of github.com:LLK/scratch-flash

[33mcommit db073c93ce64e85ca76f87b821940cc285bd2d64[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon May 12 11:05:15 2014 -0600

    Removed unused build xml

[33mcommit 490c0451e58565db41b8ed35b8894a09f1e49f19[m
Author: Shane M. Clements <shane.m.clements@gmail.com>
Date:   Mon May 12 10:44:54 2014 -0600

    Update README.md
    
    Added comment about the state of the issues.

[33mcommit 6b8f4ad1f544fd0d29d8689ce030b20a541a0260[m
Author: Shane M. Clements <shanemc@media.mit.edu>
Date:   Mon May 12 10:24:39 2014 -0600

    Initial commit
