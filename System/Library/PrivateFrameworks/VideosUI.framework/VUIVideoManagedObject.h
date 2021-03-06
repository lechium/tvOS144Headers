/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSDate, NSNumber, NSURL, NSSet;

@interface VUIVideoManagedObject : NSManagedObject

@property (nonatomic,copy) NSString * adamID; 
@property (nonatomic,retain) NSData * additionalFPSRequestParamsJSONData; 
@property (assign,nonatomic) BOOL allowsCellular; 
@property (assign,nonatomic) BOOL allowsManualRenewal; 
@property (nonatomic,copy) NSDate * availabilityEndDate; 
@property (nonatomic,copy) NSNumber * bookmarkTime; 
@property (nonatomic,copy) NSDate * bookmarkTimeStamp; 
@property (nonatomic,copy) NSString * brandID; 
@property (nonatomic,copy) NSString * brandName; 
@property (nonatomic,copy) NSString * canonicalID; 
@property (nonatomic,copy) NSString * contentRatingDomain; 
@property (nonatomic,copy) NSNumber * contentRatingRank; 
@property (nonatomic,copy) NSDate * dateAdded; 
@property (nonatomic,retain) NSData * downloadQOSMetricsJSONData; 
@property (assign,nonatomic) long long downloadState; 
@property (nonatomic,copy) NSNumber * downloadTaskIdentifier; 
@property (nonatomic,copy) NSURL * downloadURL; 
@property (nonatomic,copy) NSNumber * dsid; 
@property (nonatomic,copy) NSNumber * duration; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSURL * fpsCertificateURL; 
@property (nonatomic,copy) NSURL * fpsKeyServerURL; 
@property (nonatomic,copy) NSURL * fpsNonceURL; 
@property (nonatomic,copy) NSNumber * frequencyOfAgeConfirmation; 
@property (nonatomic,copy) NSString * genreName; 
@property (assign,nonatomic) BOOL hasExpirationDate; 
@property (assign,nonatomic) BOOL isAdultContent; 
@property (nonatomic,copy) NSString * localPlaybackRelativeFilePath; 
@property (nonatomic,copy) NSURL * localPlaybackURL; 
@property (nonatomic,copy) NSNumber * mainContentRelativeBookmarkTime; 
@property (nonatomic,copy) NSDate * mainContentRelativeBookmarkTimeStamp; 
@property (assign,nonatomic) BOOL markedAsDeleted; 
@property (nonatomic,retain) NSData * mediaMetricsJSONData; 
@property (nonatomic,copy) NSNumber * offlineKeyRenewalPolicy; 
@property (nonatomic,copy) NSURL * playbackURL; 
@property (nonatomic,copy) NSString * referenceID; 
@property (nonatomic,copy) NSDate * releaseDate; 
@property (nonatomic,copy) NSNumber * requiredAgeForPlayback; 
@property (nonatomic,copy) NSString * rtcServiceIdentifier; 
@property (assign,nonatomic) BOOL shouldMarkAsDeletedAfterCancellationOrFailure; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) NSData * vpafMetricsJSONData; 
@property (nonatomic,retain) NSSet * fpsKeyInfo; 
@property (nonatomic,retain) NSSet * imageInfos; 
+(id)fetchRequest;
@end

