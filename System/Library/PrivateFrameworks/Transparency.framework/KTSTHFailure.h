/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, KTTreeHead;

@interface KTSTHFailure : NSManagedObject

@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * errorDomain; 
@property (nonatomic,retain) NSData * proofOfFailure; 
@property (assign,nonatomic) long long verificationType; 
@property (nonatomic,retain) KTTreeHead * sth; 
+(id)fetchRequest;
@end

