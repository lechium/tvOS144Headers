/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, PXSectionedSelectionManager, NSArray, NSURL, NSDate, NSSet, PXRecipient;


@protocol PXCMMMutableViewModel <NSObject>
@property (nonatomic,copy) NSString * originalTitle; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) PXSectionedSelectionManager * selectionManager; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSURL * shareURL; 
@property (nonatomic,copy) NSString * shareUUID; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSDate * endDate; 
@property (assign,nonatomic) long long photosCount; 
@property (assign,nonatomic) long long videosCount; 
@property (assign,nonatomic) long long totalCount; 
@property (assign,nonatomic) long long selectedPhotosCount; 
@property (assign,nonatomic) long long selectedVideosCount; 
@property (assign,nonatomic) long long selectedCount; 
@property (assign,getter=isSelecting,nonatomic) BOOL selecting; 
@property (assign,nonatomic) BOOL selectionEnabled; 
@property (nonatomic,retain) NSSet * disabledActionTypes; 
@property (assign,nonatomic) BOOL loadingPeopleSuggestions; 
@property (assign,nonatomic) BOOL shouldShowPlaceholder; 
@property (assign,nonatomic) BOOL containsUnverifiedPersons; 
@property (nonatomic,copy) PXRecipient * originatorRecipient; 
@property (assign,nonatomic) unsigned long long numberOfReceivedAssets; 
@required
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(void)setSubtitle:(id)arg1;
-(NSString *)subtitle;
-(void)setStartDate:(id)arg1;
-(void)setEndDate:(id)arg1;
-(void)setRecipients:(id)arg1;
-(NSArray *)recipients;
-(void)setPhotosCount:(long long)arg1;
-(long long)photosCount;
-(long long)totalCount;
-(NSURL *)shareURL;
-(long long)videosCount;
-(void)setVideosCount:(long long)arg1;
-(void)setShareURL:(id)arg1;
-(BOOL)containsUnverifiedPersons;
-(PXSectionedSelectionManager *)selectionManager;
-(BOOL)isSelecting;
-(void)setSelecting:(BOOL)arg1;
-(void)setLoadingPeopleSuggestions:(BOOL)arg1;
-(void)setContainsUnverifiedPersons:(BOOL)arg1;
-(void)setPosterAsset:(id)arg1 posterMediaProvider:(id)arg2;
-(NSString *)originalTitle;
-(void)setOriginalTitle:(id)arg1;
-(void)setSelectionManager:(id)arg1;
-(NSString *)shareUUID;
-(void)setShareUUID:(id)arg1;
-(void)setTotalCount:(long long)arg1;
-(long long)selectedPhotosCount;
-(void)setSelectedPhotosCount:(long long)arg1;
-(long long)selectedVideosCount;
-(void)setSelectedVideosCount:(long long)arg1;
-(long long)selectedCount;
-(void)setSelectedCount:(long long)arg1;
-(BOOL)selectionEnabled;
-(void)setSelectionEnabled:(BOOL)arg1;
-(NSSet *)disabledActionTypes;
-(void)setDisabledActionTypes:(id)arg1;
-(BOOL)loadingPeopleSuggestions;
-(BOOL)shouldShowPlaceholder;
-(void)setShouldShowPlaceholder:(BOOL)arg1;
-(PXRecipient *)originatorRecipient;
-(void)setOriginatorRecipient:(id)arg1;
-(unsigned long long)numberOfReceivedAssets;
-(void)setNumberOfReceivedAssets:(unsigned long long)arg1;

@end

