/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKFingerprintGlyphViewDelegate.h>

@protocol OS_dispatch_group, PKGlyphViewDelegate;
@class NSMutableArray, NSObject, NSString, PKFingerprintGlyphView, PKPhoneGlyphLayer, CALayer, PKMicaLayer, UIColor;

@interface PKGlyphView : UIView <PKFingerprintGlyphViewDelegate> {

	long long _style;
	BOOL _isPad;
	unsigned long long _transitionIndex;
	BOOL _transitioning;
	BOOL _transitioningAnimated;
	long long _priorState;
	NSMutableArray* _transitionCompletionHandlers;
	NSObject*<OS_dispatch_group> _lastAnimationGroup;
	double _lastAnimationWillFinish;
	BOOL _phoneWiggling;
	NSString* _phoneWiggleAnimationKey;
	struct {
		unsigned showingPhone : 1;
		unsigned phoneRotated : 1;
		unsigned showingUserIntentPhone : 1;
		unsigned showingUserIntentArrow : 1;
	}  _layoutFlags;
	PKFingerprintGlyphView* _fingerprintView;
	PKPhoneGlyphLayer* _phoneLayer;
	CALayer* _userIntentLayer;
	PKMicaLayer* _userIntentArrowLayer;
	PKMicaLayer* _userIntentDeviceLayer;
	double _phoneAspectRatio;
	CALayer* _customImageLayer;
	UIColor* _secondaryColor;
	UIColor* _primaryHighlightColor;
	UIColor* _intentPrimaryHighlightColor;
	UIColor* _secondaryHighlightColor;
	BOOL _showQRCode;
	unsigned _userIntentEdge;
	long long _colorMode;
	UIColor* _primaryColor;
	CGImageRef _customImage;
	long long _state;
	id<PKGlyphViewDelegate> _delegate;
	UIEdgeInsets _customImageAlignmentEdgeInsets;

}

@property (nonatomic,readonly) long long colorMode;                                      //@synthesize colorMode=_colorMode - In the implementation block
@property (nonatomic,copy,readonly) UIColor * primaryColor;                              //@synthesize primaryColor=_primaryColor - In the implementation block
@property (assign,nonatomic) BOOL fadeOnRecognized; 
@property (nonatomic,readonly) UIEdgeInsets customImageAlignmentEdgeInsets;              //@synthesize customImageAlignmentEdgeInsets=_customImageAlignmentEdgeInsets - In the implementation block
@property (nonatomic,readonly) CGImageRef customImage;                                   //@synthesize customImage=_customImage - In the implementation block
@property (nonatomic,readonly) long long state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned userIntentEdge;                                  //@synthesize userIntentEdge=_userIntentEdge - In the implementation block
@property (assign,nonatomic,__weak) id<PKGlyphViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showQRCode;                                            //@synthesize showQRCode=_showQRCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversOfState;
+(id)sharedStaticResources;
+(void)invokeSuccessFeedback;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<PKGlyphViewDelegate>)delegate;
-(void)setDelegate:(id<PKGlyphViewDelegate>)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(long long)colorMode;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)primaryColor;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(void)didMoveToWindow;
-(void)tintColorDidChange;
-(void)_executeTransitionCompletionHandlers:(BOOL)arg1 ;
-(void)fingerprintGlyphView:(id)arg1 didLayoutContentLayer:(id)arg2 ;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_performTransitionWithTransitionIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1 ;
-(void)_executeAfterMinimumAnimationDurationForStateTransition:(/*^block*/id)arg1 ;
-(void)_finishTransitionForIndex:(unsigned long long)arg1 ;
-(BOOL)fadeOnRecognized;
-(void)setFadeOnRecognized:(BOOL)arg1 ;
-(void)_startPhoneWiggle;
-(void)_endPhoneWiggle;
-(void)setShowQRCode:(BOOL)arg1 ;
-(BOOL)showQRCode;
-(id)createCustomImageLayer;
-(void)_applyColorMode:(BOOL)arg1 ;
-(void)_applyEffectiveHighlightColorsToLayersAnimated:(BOOL)arg1 ;
-(void)updateRasterizationScale:(double)arg1 ;
-(void)_updateUserIntentLayerRotation;
-(void)updateRotation;
-(void)_updateUserIntentLayoutAnimated:(BOOL)arg1 ;
-(void)_updatePhoneLayoutWithTransitionIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_executeAfterMinimumAnimationDurationForStateTransitionWithDelayRatio:(double)arg1 handler:(/*^block*/id)arg2 ;
-(void)_updatePhoneWiggleIfNecessary;
-(void)_updateCustomImageLayerOpacityAnimated:(BOOL)arg1 ;
-(void)_updateCheckViewStateAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setColorMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_setRecognizedIfNecessaryWithTransitionIndex:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(CGPoint)_phonePositionWhileShownWithRotationPercentage:(double)arg1 ;
-(CATransform3D)_phoneTransformDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2 ;
-(CGPoint)_phonePositionDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2 ;
-(void)_applyEffectivePrimaryColorToLayersAnimated:(BOOL)arg1 ;
-(id)_primaryColorForStyle:(long long)arg1 mode:(long long)arg2 ;
-(void)_setPrimaryColor:(id)arg1 animated:(BOOL)arg2 ;
-(id)_secondaryColorForStyle:(long long)arg1 mode:(long long)arg2 ;
-(void)_setSecondaryColor:(id)arg1 animated:(BOOL)arg2 ;
-(void)_layoutContentLayer:(id)arg1 ;
-(void)setCustomImage:(CGImageRef)arg1 withAlignmentEdgeInsets:(UIEdgeInsets)arg2 ;
-(UIEdgeInsets)customImageAlignmentEdgeInsets;
-(CGImageRef)customImage;
-(unsigned)userIntentEdge;
@end

