/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSDate, NSDictionary;

@interface VCIDApplicationSyncState : MTLModel <MTLJSONSerializing> {

	NSString* _checksum;
	NSDate* _registeredDate;

}

@property (nonatomic,copy) NSString * checksum;                                  //@synthesize checksum=_checksum - In the implementation block
@property (nonatomic,copy) NSDate * registeredDate;                              //@synthesize registeredDate=_registeredDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
-(NSString *)checksum;
-(void)setChecksum:(NSString *)arg1 ;
-(NSDate *)registeredDate;
-(void)setRegisteredDate:(NSDate *)arg1 ;
@end

