/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKEventOperationInfo : NSObject <NSSecureCoding> {

	NSString* _operationID;
	NSString* _operationType;
	NSString* _operationGroupID;

}

@property (nonatomic,readonly) NSString * operationID;                   //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,readonly) NSString * operationType;                 //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) NSString * operationGroupID;              //@synthesize operationGroupID=_operationGroupID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)operationID;
-(NSString *)operationType;
-(NSString *)operationGroupID;
-(id)initWithOperation:(id)arg1 ;
@end

