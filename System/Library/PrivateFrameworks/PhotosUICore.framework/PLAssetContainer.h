/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSOrderedSet, PLManagedAsset, NSArray, NSDate;


@protocol PLAssetContainer <NSObject,PLDiagnosticsProvider>
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,retain,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
@optional
-(NSDate *)endDate;
-(NSDate *)startDate;

@required
-(BOOL)isEmpty;
-(unsigned long long)approximateCount;
-(NSString *)title;
-(NSString *)uuid;
-(NSString *)localizedTitle;
-(unsigned long long)photosCount;
-(NSOrderedSet *)assets;
-(void)setKeyAsset:(id)arg1;
-(unsigned long long)videosCount;
-(unsigned long long)assetsCount;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1;
-(PLManagedAsset *)keyAsset;
-(PLManagedAsset *)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(id)arg1;
-(PLManagedAsset *)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(id)arg1;
-(BOOL)canShowComments;
-(BOOL)canShowAvalancheStacks;
-(NSArray *)localizedLocationNames;

@end

