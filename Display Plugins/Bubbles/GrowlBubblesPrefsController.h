//
//  GrowlBubblesPrefsController.h
//  Growl
//
//  Created by Kevin Ballard on 9/7/04.
//  Name changed from KABubblePrefsController.h by Justin Burns on Fri Nov 05 2004.
//  Copyright 2004 TildeSoft. All rights reserved.
//

#import <PreferencePanes/PreferencePanes.h>

@interface GrowlBubblesPrefsController : NSPreferencePane {
	float					duration;
	float					opacity;
	BOOL					limit;

	IBOutlet NSColorWell	*top_veryLow;
	IBOutlet NSColorWell	*top_moderate;
	IBOutlet NSColorWell	*top_normal;
	IBOutlet NSColorWell	*top_high;
	IBOutlet NSColorWell	*top_emergency;

	IBOutlet NSColorWell	*color_veryLow;
	IBOutlet NSColorWell	*color_moderate;
	IBOutlet NSColorWell	*color_normal;
	IBOutlet NSColorWell	*color_high;
	IBOutlet NSColorWell	*color_emergency;
	
	IBOutlet NSColorWell	*text_veryLow;
	IBOutlet NSColorWell	*text_moderate;
	IBOutlet NSColorWell	*text_normal;
	IBOutlet NSColorWell	*text_high;
	IBOutlet NSColorWell	*text_emergency;

	IBOutlet NSSlider		*slider_opacity;
	IBOutlet NSComboBox		*combo_screen;
}
- (float) getDuration;
- (void) setDuration:(float)value;
- (float) getOpacity;
- (void) setOpacity:(float)value;
- (BOOL) getLimit;
- (void) setLimit:(BOOL)value;
- (IBAction) colorChanged:(id)sender;
- (IBAction) textColorChanged:(id)sender;
- (IBAction) topColorChanged:(id)sender;
- (IBAction) setScreen:(id)sender;

@end
