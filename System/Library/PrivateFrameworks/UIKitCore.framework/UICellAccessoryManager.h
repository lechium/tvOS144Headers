/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UICellAccessoryLayout;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSDictionary, NSString, UIView, UICellAccessoryConfiguration, NSMutableDictionary;

@interface UICellAccessoryManager : NSObject {

	CGSize _enforcedContainerSize;
	BOOL _needsLayout;
	/*^block*/id _standardLayoutWidthProvider;
	/*^block*/id _disclosureLayoutWidthProvider;
	id<UICellAccessoryLayout> _leadingLayout;
	id<UICellAccessoryLayout> _trailingLayout;
	NSDictionary* _configurations;
	NSString* _currentConfigurationIdentifier;
	UIView* _containerView;
	UICellAccessoryConfiguration* _previousConfiguration;
	NSMutableDictionary* _accessoryViews;
	CGSize _previousContainerSize;
	UIEdgeInsets _safeAreaInsets;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic,__weak) UIView * containerView;                                      //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) BOOL needsLayout;                                                   //@synthesize needsLayout=_needsLayout - In the implementation block
@property (assign,nonatomic) CGSize previousContainerSize;                                       //@synthesize previousContainerSize=_previousContainerSize - In the implementation block
@property (nonatomic,retain) UICellAccessoryConfiguration * previousConfiguration;               //@synthesize previousConfiguration=_previousConfiguration - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessoryViews;                               //@synthesize accessoryViews=_accessoryViews - In the implementation block
@property (assign,nonatomic) UIEdgeInsets safeAreaInsets;                                        //@synthesize safeAreaInsets=_safeAreaInsets - In the implementation block
@property (nonatomic,copy) id standardLayoutWidthProvider;                                       //@synthesize standardLayoutWidthProvider=_standardLayoutWidthProvider - In the implementation block
@property (nonatomic,copy) id disclosureLayoutWidthProvider;                                     //@synthesize disclosureLayoutWidthProvider=_disclosureLayoutWidthProvider - In the implementation block
@property (nonatomic,retain) id<UICellAccessoryLayout> leadingLayout;                            //@synthesize leadingLayout=_leadingLayout - In the implementation block
@property (nonatomic,retain) id<UICellAccessoryLayout> trailingLayout;                           //@synthesize trailingLayout=_trailingLayout - In the implementation block
@property (nonatomic,retain) NSDictionary * configurations;                                      //@synthesize configurations=_configurations - In the implementation block
@property (nonatomic,copy) NSString * currentConfigurationIdentifier;                            //@synthesize currentConfigurationIdentifier=_currentConfigurationIdentifier - In the implementation block
@property (nonatomic,readonly) UICellAccessoryConfiguration * currentConfiguration; 
@property (nonatomic,readonly) CGSize containerSize; 
@property (nonatomic,readonly) CGRect contentFrame; 
@property (nonatomic,readonly) UIEdgeInsets contentInset;                                        //@synthesize contentInset=_contentInset - In the implementation block
-(id)description;
-(NSDictionary *)configurations;
-(void)setNeedsLayout;
-(BOOL)needsLayout;
-(void)layoutIfNeeded;
-(CGRect)contentFrame;
-(UIEdgeInsets)safeAreaInsets;
-(void)setNeedsLayout:(BOOL)arg1 ;
-(CGSize)containerSize;
-(UIEdgeInsets)contentInset;
-(UICellAccessoryConfiguration *)currentConfiguration;
-(UIView *)containerView;
-(NSMutableDictionary *)accessoryViews;
-(void)setSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setConfigurations:(NSDictionary *)arg1 ;
-(UICellAccessoryConfiguration *)previousConfiguration;
-(void)setPreviousConfiguration:(UICellAccessoryConfiguration *)arg1 ;
-(id)initWithContainerView:(id)arg1 ;
-(void)setCurrentConfigurationIdentifier:(NSString *)arg1 ;
-(void)setLeadingLayout:(id<UICellAccessoryLayout>)arg1 ;
-(void)setTrailingLayout:(id<UICellAccessoryLayout>)arg1 ;
-(void)setStandardLayoutWidthProvider:(id)arg1 ;
-(void)setDisclosureLayoutWidthProvider:(id)arg1 ;
-(void)updateContainerView:(id)arg1 ;
-(void)performWithEnforcedContainerSize:(CGSize)arg1 block:(/*^block*/id)arg2 ;
-(id<UICellAccessoryLayout>)leadingLayout;
-(id<UICellAccessoryLayout>)trailingLayout;
-(id)_configurationWithIdentifier:(id)arg1 ;
-(CGRect)_updateAccessories:(id)arg1 previousAccessories:(id)arg2 withLayout:(id)arg3 edge:(unsigned long long)arg4 ;
-(CGRect)containerBounds;
-(id)standardLayoutWidthProvider;
-(id)disclosureLayoutWidthProvider;
-(void)_updateFromPreviousConfiguration:(id)arg1 ;
-(NSString *)currentConfigurationIdentifier;
-(CGSize)previousContainerSize;
-(void)setPreviousContainerSize:(CGSize)arg1 ;
-(void)setAccessoryViews:(NSMutableDictionary *)arg1 ;
@end

