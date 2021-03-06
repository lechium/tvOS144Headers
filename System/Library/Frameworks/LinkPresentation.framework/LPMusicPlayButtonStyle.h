/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class LPSize, UIColor;

@interface LPMusicPlayButtonStyle : NSObject {

	LPSize* _size;
	UIColor* _keyColor;
	UIColor* _secondaryColor;

}

@property (nonatomic,retain) LPSize * size;                         //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) UIColor * keyColor;                    //@synthesize keyColor=_keyColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;              //@synthesize secondaryColor=_secondaryColor - In the implementation block
-(id)init;
-(LPSize *)size;
-(void)setSize:(LPSize *)arg1 ;
-(UIColor *)secondaryColor;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(UIColor *)keyColor;
-(void)setKeyColor:(UIColor *)arg1 ;
@end

