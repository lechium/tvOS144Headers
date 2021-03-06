/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSUUID, NSURL, NSSet;

@interface _CDAttachmentRecord : NSManagedObject

@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSString * uti; 
@property (nonatomic,retain) NSUUID * identifier; 
@property (nonatomic,retain) NSUUID * cloudIdentifier; 
@property (nonatomic,retain) NSString * photoLocalIdentifier; 
@property (assign,nonatomic) long long sizeInBytes; 
@property (nonatomic,retain) NSURL * contentURL; 
@property (nonatomic,retain) NSString * contentText; 
@property (nonatomic,retain) NSSet * interactions; 
@end

