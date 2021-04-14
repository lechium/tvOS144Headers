/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKFieldDetectSuppressor.h>

@class PKPaymentHeroImageController, UIImageView, UIView, PKPaymentPass, PKEducationPhone, NSString;

@interface PKEducationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKFieldDetectSuppressor> {

	PKPaymentHeroImageController* _heroImageController;
	UIImageView* _heroPadImageView;
	UIView* _heroPadBackground;
	PKPaymentPass* _paymentPass;
	unsigned long long _educationContext;
	PKEducationPhone* _educationBodyView;
	BOOL _isFaceIDDevice;
	BOOL _invalidated;
	BOOL _offerAddToWatch;
	/*^block*/id _continueHandler;
	NSString* _titleOverride;
	NSString* _bodyAddition;

}

@property (nonatomic,copy) id continueHandler;                        //@synthesize continueHandler=_continueHandler - In the implementation block
@property (assign,nonatomic) BOOL offerAddToWatch;                    //@synthesize offerAddToWatch=_offerAddToWatch - In the implementation block
@property (nonatomic,copy) NSString * titleOverride;                  //@synthesize titleOverride=_titleOverride - In the implementation block
@property (nonatomic,copy) NSString * bodyAddition;                   //@synthesize bodyAddition=_bodyAddition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL suppressFieldDetect; 
+(BOOL)shouldPresentForPass:(id)arg1 inEducationContext:(unsigned long long)arg2 ;
+(id)assetBackgroundColor;
+(id)assetBackgroundColorPad;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg1 setupContext:(long long)arg2 educationContext:(unsigned long long)arg3 ;
-(id)_heroPadImage;
-(void)_performAddToWatchFlow;
-(void)performContinue;
-(void)_showAddToWatchOfferForPass:(id)arg1 ;
-(BOOL)suppressFieldDetect;
-(id)continueHandler;
-(void)setContinueHandler:(id)arg1 ;
-(BOOL)offerAddToWatch;
-(void)setOfferAddToWatch:(BOOL)arg1 ;
-(NSString *)titleOverride;
-(void)setTitleOverride:(NSString *)arg1 ;
-(NSString *)bodyAddition;
-(void)setBodyAddition:(NSString *)arg1 ;
@end

