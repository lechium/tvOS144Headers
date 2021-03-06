/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>

@class UIView;

@interface UIKBCandidateView : UIKBKeyView {

	SCD_Struct_UI91 _visualStyling;
	UIView* _candidateKey;

}

@property (assign,nonatomic) SCD_Struct_UI91 visualStyling;              //@synthesize visualStyling=_visualStyling - In the implementation block
@property (nonatomic,retain) UIView * candidateKey;                      //@synthesize candidateKey=_candidateKey - In the implementation block
-(void)dealloc;
-(void)displayLayer:(id)arg1 ;
-(id)candidateList;
-(SCD_Struct_UI91)visualStyling;
-(UIView *)candidateKey;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)setVisualStyling:(SCD_Struct_UI91)arg1 ;
-(BOOL)isTenKey;
-(void)updateCandidateKey;
-(void)clearCandidateKey;
-(void)setCandidateKey:(UIView *)arg1 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
@end

