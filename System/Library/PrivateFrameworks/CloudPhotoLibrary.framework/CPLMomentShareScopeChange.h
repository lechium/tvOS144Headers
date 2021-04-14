/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CPLScopeChange.h>

@class NSString, NSDate, NSData;

@interface CPLMomentShareScopeChange : CPLScopeChange {

	NSString* _title;
	NSDate* _creationDate;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDate* _expiryDate;
	long long _promisedAssetCount;
	long long _promisedPhotosCount;
	long long _promisedVideosCount;
	NSData* _thumbnailImageData;
	NSData* _previewImageData;
	NSString* _originatingScopeIdentifier;

}

@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                                   //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSDate * expiryDate;                                //@synthesize expiryDate=_expiryDate - In the implementation block
@property (assign,nonatomic) long long promisedAssetCount;                     //@synthesize promisedAssetCount=_promisedAssetCount - In the implementation block
@property (assign,nonatomic) long long promisedPhotosCount;                    //@synthesize promisedPhotosCount=_promisedPhotosCount - In the implementation block
@property (assign,nonatomic) long long promisedVideosCount;                    //@synthesize promisedVideosCount=_promisedVideosCount - In the implementation block
@property (nonatomic,copy) NSData * thumbnailImageData;                        //@synthesize thumbnailImageData=_thumbnailImageData - In the implementation block
@property (nonatomic,copy) NSData * previewImageData;                          //@synthesize previewImageData=_previewImageData - In the implementation block
@property (nonatomic,copy) NSString * originatingScopeIdentifier;              //@synthesize originatingScopeIdentifier=_originatingScopeIdentifier - In the implementation block
-(NSDate *)creationDate;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(NSDate *)expiryDate;
-(NSData *)thumbnailImageData;
-(void)setThumbnailImageData:(NSData *)arg1 ;
-(void)udpateScopeFromScopeChange:(id)arg1 direction:(unsigned long long)arg2 didHaveChanges:(BOOL*)arg3 ;
-(void)setLibraryInfo:(id)arg1 ;
-(id)momentShare;
-(void)setMomentShare:(id)arg1 ;
-(long long)promisedAssetCount;
-(void)setPromisedAssetCount:(long long)arg1 ;
-(long long)promisedPhotosCount;
-(void)setPromisedPhotosCount:(long long)arg1 ;
-(long long)promisedVideosCount;
-(void)setPromisedVideosCount:(long long)arg1 ;
-(NSData *)previewImageData;
-(void)setPreviewImageData:(NSData *)arg1 ;
-(NSString *)originatingScopeIdentifier;
-(void)setOriginatingScopeIdentifier:(NSString *)arg1 ;
@end

