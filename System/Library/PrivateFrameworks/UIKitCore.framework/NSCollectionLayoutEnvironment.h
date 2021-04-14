/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCollectionLayoutEnvironment_Private.h>

@protocol _UIDataSourceSnapshot, NSCollectionLayoutContainer;
@class UITraitCollection, NSString;

@interface NSCollectionLayoutEnvironment : NSObject <NSCollectionLayoutEnvironment_Private> {

	id<_UIDataSourceSnapshot> __dataSourceSnapshot;
	id<NSCollectionLayoutContainer> _container;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,retain) id<NSCollectionLayoutContainer> container;                  //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                        //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,retain) id<_UIDataSourceSnapshot> _dataSourceSnapshot;              //@synthesize _dataSourceSnapshot=__dataSourceSnapshot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NSCollectionLayoutContainer>)container;
-(void)setContainer:(id<NSCollectionLayoutContainer>)arg1 ;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(id<_UIDataSourceSnapshot>)_dataSourceSnapshot;
-(id)initWithContainer:(id)arg1 traitCollection:(id)arg2 dataSourceSnapshot:(id)arg3 ;
-(void)set_dataSourceSnapshot:(id<_UIDataSourceSnapshot>)arg1 ;
@end

