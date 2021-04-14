/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMClientUsageMetrics : FATObject {

	NSNumber* _sessions;
	NSString* _subjectConsumerKey;
	NSString* _subjectConsumerSecret;

}

@property (nonatomic,retain) NSNumber * sessions;                           //@synthesize sessions=_sessions - In the implementation block
@property (nonatomic,retain) NSString * subjectConsumerKey;                 //@synthesize subjectConsumerKey=_subjectConsumerKey - In the implementation block
@property (nonatomic,retain) NSString * subjectConsumerSecret;              //@synthesize subjectConsumerSecret=_subjectConsumerSecret - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)sessions;
-(void)setSessions:(NSNumber *)arg1 ;
-(NSString *)subjectConsumerKey;
-(void)setSubjectConsumerKey:(NSString *)arg1 ;
-(NSString *)subjectConsumerSecret;
-(void)setSubjectConsumerSecret:(NSString *)arg1 ;
@end

