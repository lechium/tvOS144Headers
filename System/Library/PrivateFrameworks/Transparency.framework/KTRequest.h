/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, NSDate, NSUUID, NSSet, DownloadRecord;

@interface KTRequest : NSManagedObject

@property (nonatomic,retain) NSData * accountId; 
@property (nonatomic,copy) NSString * application; 
@property (nonatomic,retain) NSData * clientLoggableDatas; 
@property (nonatomic,copy) NSDate * earliestAddedDate; 
@property (nonatomic,retain) NSData * queryRequest; 
@property (nonatomic,retain) NSData * queryResponse; 
@property (nonatomic,copy) NSUUID * requestId; 
@property (assign,nonatomic) double requestTime; 
@property (assign,nonatomic) long long responseErrorCode; 
@property (nonatomic,copy) NSDate * responseTime; 
@property (assign,nonatomic) long long sequenceId; 
@property (nonatomic,copy) NSString * serverHint; 
@property (nonatomic,retain) NSData * serverLoggableDatas; 
@property (assign,nonatomic) BOOL tooManyVRFs; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * uri; 
@property (assign,nonatomic) long long verificationResult; 
@property (nonatomic,retain) NSSet * failures; 
@property (nonatomic,retain) NSSet * fetchRecord; 
@property (nonatomic,retain) DownloadRecord * requestDownloadRecord; 
@property (nonatomic,retain) NSSet * requestIDCache; 
@property (nonatomic,retain) DownloadRecord * smtDownloadRecord; 
@property (nonatomic,retain) NSSet * smts; 
+(id)fetchRequest;
@end

