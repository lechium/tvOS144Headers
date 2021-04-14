/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, UIColor, UIBlurEffect;

@interface UITextInputAssistantItem : NSObject {

	BOOL _allowsHidingShortcuts;
	BOOL _showsBarButtonItemsInline;
	BOOL _independentGroupSizes;
	NSArray* _leadingBarButtonGroups;
	NSArray* _trailingBarButtonGroups;
	NSArray* _centerBarButtonGroups;
	double _marginOverride;
	UIColor* _detachedBackgroundColor;
	UIBlurEffect* _detachedBackgroundEffect;
	UIColor* _detachedTintColor;

}

@property (getter=_isSystemItem,nonatomic,readonly) BOOL systemItem; 
@property (getter=_hasItemsToDisplay,nonatomic,readonly) BOOL hasItemsToDisplay; 
@property (getter=_requiresPredictionDisabled,nonatomic,readonly) BOOL requiresPredictionDisabled; 
@property (assign,setter=_setShowsBarButtonItemsInline:,getter=_showsBarButtonItemsInline,nonatomic) BOOL showsBarButtonItemsInline;                   //@synthesize showsBarButtonItemsInline=_showsBarButtonItemsInline - In the implementation block
@property (setter=_setCenterBarButtonGroups:,getter=_centerBarButtonGroups,nonatomic,copy) NSArray * centerBarButtonGroups;                            //@synthesize centerBarButtonGroups=_centerBarButtonGroups - In the implementation block
@property (assign,setter=_setIndependentGroupSizes:,getter=_independentGroupSizes,nonatomic) BOOL independentGroupSizes;                               //@synthesize independentGroupSizes=_independentGroupSizes - In the implementation block
@property (assign,setter=_setMarginOverride:,getter=_marginOverride,nonatomic) double marginOverride;                                                  //@synthesize marginOverride=_marginOverride - In the implementation block
@property (setter=_setDetachedBackgroundColor:,getter=_detachedBackgroundColor,nonatomic,retain) UIColor * detachedBackgroundColor;                    //@synthesize detachedBackgroundColor=_detachedBackgroundColor - In the implementation block
@property (setter=_setDetachedBackgroundEffect:,getter=_detachedBackgroundEffect,nonatomic,copy) UIBlurEffect * detachedBackgroundEffect;              //@synthesize detachedBackgroundEffect=_detachedBackgroundEffect - In the implementation block
@property (setter=_setDetachedTintColor:,getter=_detachedTintColor,nonatomic,retain) UIColor * detachedTintColor;                                      //@synthesize detachedTintColor=_detachedTintColor - In the implementation block
@property (assign,nonatomic) BOOL allowsHidingShortcuts;                                                                                               //@synthesize allowsHidingShortcuts=_allowsHidingShortcuts - In the implementation block
@property (nonatomic,copy) NSArray * leadingBarButtonGroups;                                                                                           //@synthesize leadingBarButtonGroups=_leadingBarButtonGroups - In the implementation block
@property (nonatomic,copy) NSArray * trailingBarButtonGroups;                                                                                          //@synthesize trailingBarButtonGroups=_trailingBarButtonGroups - In the implementation block
+(id)_keyboardDeleteItem;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSArray *)leadingBarButtonGroups;
-(NSArray *)trailingBarButtonGroups;
-(id)_centerBarButtonGroups;
-(void)setTrailingBarButtonGroups:(NSArray *)arg1 ;
-(void)setLeadingBarButtonGroups:(NSArray *)arg1 ;
-(void)_setCenterBarButtonGroups:(id)arg1 ;
-(BOOL)_independentGroupSizes;
-(BOOL)allowsHidingShortcuts;
-(BOOL)_isSystemItem;
-(BOOL)_hasItemsToDisplay;
-(BOOL)_requiresPredictionDisabled;
-(void)_setIndependentGroupSizes:(BOOL)arg1 ;
-(void)_setMarginOverride:(double)arg1 ;
-(void)setAllowsHidingShortcuts:(BOOL)arg1 ;
-(BOOL)_showsBarButtonItemsInline;
-(void)_setShowsBarButtonItemsInline:(BOOL)arg1 ;
-(double)_marginOverride;
-(id)_detachedBackgroundColor;
-(void)_setDetachedBackgroundColor:(id)arg1 ;
-(id)_detachedBackgroundEffect;
-(void)_setDetachedBackgroundEffect:(id)arg1 ;
-(id)_detachedTintColor;
-(void)_setDetachedTintColor:(id)arg1 ;
@end

