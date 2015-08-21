//
//  NailDecorateViewController.h
//  NailSalon
//
//  Created by Alexandra Smau on 5/7/13.
//  Copyright (c) 2013 Newrosoft. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CropImageViewController.h"

@interface NailDecorateViewController : UIViewController <CropImageViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    IBOutlet UIImageView *handImgView;
    IBOutlet UIImageView *fingerImgView;
    IBOutlet UIImageView *unlockSparkle1;
    IBOutlet UIImageView *unlockSparkle2;
    IBOutlet UIImageView *backgroundImgView;
    IBOutlet UIImageView *background2ImgView;
    
    IBOutlet UIView *nail1View;
    IBOutlet UIView *nail2View;
    IBOutlet UIView *nail3View;
    IBOutlet UIView *nail4View;
    IBOutlet UIView *nail5View;
    
    IBOutlet UIScrollView       *scrollViewColorPicker;
    
    // Color buttons
    IBOutlet UIButton *btnClose;
    IBOutlet UIButton *btnPurple;
    IBOutlet UIButton *btnRed;
    IBOutlet UIButton *btnBrown;
    IBOutlet UIButton *btnBlue;
    IBOutlet UIButton *btnSkyBlue;
    IBOutlet UIButton *btnOrange;
    IBOutlet UIButton *btnGreen;
    IBOutlet UIButton *btnYellow;
    IBOutlet UIButton *btnBlack;
    IBOutlet UIButton *btnMagenta;
    
    IBOutlet UIImageView *nail1Color;
    IBOutlet UIImageView *nail1Gloss;
    IBOutlet UIImageView *nail1Pattern;
    IBOutlet UIImageView *nail1Tip;
    
    IBOutlet UIImageView *nail2Color;
    IBOutlet UIImageView *nail2Gloss;
    IBOutlet UIImageView *nail2Pattern;
    IBOutlet UIImageView *nail2Tip;

    IBOutlet UIImageView *nail3Color;
    IBOutlet UIImageView *nail3Gloss;
    IBOutlet UIImageView *nail3Pattern;
    IBOutlet UIImageView *nail3Tip;

    IBOutlet UIImageView *nail4Color;
    IBOutlet UIImageView *nail4Gloss;
    IBOutlet UIImageView *nail4Pattern;
    IBOutlet UIImageView *nail4Tip;

    IBOutlet UIImageView *nail5Color;
    IBOutlet UIImageView *nail5Gloss;
    IBOutlet UIImageView *nail5Pattern;
    IBOutlet UIImageView *nail5Tip;
    
    IBOutlet UIView *singleFinger;
    IBOutlet UIImageView *singleColor;
    IBOutlet UIImageView *singleGloss;
    IBOutlet UIImageView *singlePattern;
    IBOutlet UIImageView *singleTip;
    
    IBOutlet UIScrollView *secondScroll;
    IBOutlet UIImageView *greyImgView;
    IBOutlet UIScrollView *menuScroll;
    
    IBOutlet UIButton *unlockEv1;
    IBOutlet UIButton *unlockEv2;
    
    int nailSelected;
    int lastAccessory;
    
    int nail1ColorNr;
    int nail1GlossNr;
    int nail1PatternNr;
    int nail1TipNr;
    int nail2ColorNr;
    int nail2GlossNr;
    int nail2PatternNr;
    int nail2TipNr;
    int nail3ColorNr;
    int nail3GlossNr;
    int nail3PatternNr;
    int nail3TipNr;
    int nail4ColorNr;
    int nail4GlossNr;
    int nail4PatternNr;
    int nail4TipNr;
    int nail5ColorNr;
    int nail5GlossNr;
    int nail5PatternNr;
    int nail5TipNr;
    int hand;
    int background;
    
    BOOL isActive;
    
    NSMutableArray *extras1Array;
    NSMutableArray *extras2Array;
    NSMutableArray *extras3Array;
    NSMutableArray *extras4Array;
    NSMutableArray *extras5Array;
    NSMutableArray *extras6Array;
    
    NSMutableArray *changes1;
    NSMutableArray *changes2;
    NSMutableArray *changes3;
    NSMutableArray *changes4;
    NSMutableArray *changes5;
    NSMutableArray *changes6;

}

- (IBAction)btnGallery_action:(UIButton *)sender;

- (IBAction)nailSelected:(UIButton*)sender;
- (IBAction)backFromFinger:(id)sender;
- (IBAction)menuChosen:(UIButton*)sender;
- (IBAction)backClick:(id)sender;
- (IBAction)undoClick:(id)sender;
- (IBAction)unlockEverythingClick:(id)sender;
- (IBAction)nextClick:(id)sender;
- (IBAction)applyToAll:(id)sender;

// Color Actions
- (IBAction)btnClose_action:(UIButton *)sender;
- (IBAction)btnPurple_action:(UIButton *)sender;
- (IBAction)btnRed_action:(UIButton *)sender;
- (IBAction)btnBrown_action:(UIButton *)sender;
- (IBAction)btnBlue_action:(UIButton *)sender;
- (IBAction)btnSkyBlue_action:(UIButton *)sender;
- (IBAction)btnOrange_action:(UIButton *)sender;
- (IBAction)btnGreen_action:(UIButton *)sender;
- (IBAction)btnYellow_action:(UIButton *)sender;
- (IBAction)btnBlack_action:(UIButton *)sender;
- (IBAction)btnMagenta_action:(UIButton *)sender;

@end
