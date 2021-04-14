/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SeymourUI/SeymourUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SMUCollectionViewListLayoutSectionConfiguration : NSObject <NSCopying> {

	id __smu_underlyingConfiguration;

}

@property (nonatomic,readonly) id _smu_underlyingConfiguration;                           //@synthesize _smu_underlyingConfiguration=__smu_underlyingConfiguration - In the implementation block
@property (assign,nonatomic) long long smu_appearanceStyle; 
@property (assign,nonatomic) double smu_rowHeight; 
@property (assign,nonatomic) double smu_sectionHeaderHeight; 
@property (assign,nonatomic) double smu_sectionFooterHeight; 
@property (assign,nonatomic) double smu_estimatedRowHeight; 
@property (assign,nonatomic) double smu_estimatedSectionHeaderHeight; 
@property (assign,nonatomic) double smu_estimatedSectionFooterHeight; 
@property (assign,nonatomic) long long smu_separatorStyle; 
@property (assign,nonatomic) NSDirectionalEdgeInsets smu_separatorInset; 
@property (nonatomic,copy) id smu_separatorInsetProvider; 
@property (nonatomic,copy) id smu_leadingSwipeActionsConfigurationProvider; 
@property (nonatomic,copy) id smu_trailingSwipeActionsConfigurationProvider; 
@property (nonatomic,copy) id smu_willBeginSwipingHandler; 
@property (nonatomic,copy) id smu_didEndSwipingHandler; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_smu_underlyingConfiguration;
-(long long)_underlyingStyleForAppearanceStyle:(long long)arg1 ;
-(id)initWithAppearanceStyle:(long long)arg1 layoutEnvironment:(id)arg2 ;
-(long long)smu_appearanceStyle;
-(void)setSmu_appearanceStyle:(long long)arg1 ;
-(double)smu_rowHeight;
-(void)setSmu_rowHeight:(double)arg1 ;
-(double)smu_sectionHeaderHeight;
-(void)setSmu_sectionHeaderHeight:(double)arg1 ;
-(double)smu_sectionFooterHeight;
-(void)setSmu_sectionFooterHeight:(double)arg1 ;
-(double)smu_estimatedRowHeight;
-(void)setSmu_estimatedRowHeight:(double)arg1 ;
-(double)smu_estimatedSectionHeaderHeight;
-(void)setSmu_estimatedSectionHeaderHeight:(double)arg1 ;
-(double)smu_estimatedSectionFooterHeight;
-(void)setSmu_estimatedSectionFooterHeight:(double)arg1 ;
-(NSDirectionalEdgeInsets)smu_separatorInset;
-(void)setSmu_separatorInset:(NSDirectionalEdgeInsets)arg1 ;
-(long long)_underlyingStyleForSeparatorStyle:(long long)arg1 ;
-(long long)_wrappedStyleForAppearanceStyle:(long long)arg1 ;
-(long long)_wrappedStyleForSeparatorStyle:(long long)arg1 ;
-(void)setSmu_separatorStyle:(long long)arg1 ;
-(void)setSmu_separatorInsetProvider:(id)arg1 ;
-(void)setSmu_leadingSwipeActionsConfigurationProvider:(id)arg1 ;
-(void)setSmu_trailingSwipeActionsConfigurationProvider:(id)arg1 ;
-(void)setSmu_willBeginSwipingHandler:(id)arg1 ;
-(void)setSmu_didEndSwipingHandler:(id)arg1 ;
-(long long)smu_separatorStyle;
-(id)smu_separatorInsetProvider;
-(id)smu_leadingSwipeActionsConfigurationProvider;
-(id)smu_trailingSwipeActionsConfigurationProvider;
-(id)smu_willBeginSwipingHandler;
-(id)smu_didEndSwipingHandler;
@end
