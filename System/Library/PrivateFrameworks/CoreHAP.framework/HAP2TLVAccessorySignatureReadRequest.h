/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAP2TLVParamAccessoryList, NSString;

@interface HAP2TLVAccessorySignatureReadRequest : NSObject <NSCopying, HAPTLVProtocol> {

	HAP2TLVParamAccessoryList* _accessoryList;

}

@property (nonatomic,retain) HAP2TLVParamAccessoryList * accessoryList;              //@synthesize accessoryList=_accessoryList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(id)serializeWithError:(id*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)initWithAccessoryList:(id)arg1 ;
-(HAP2TLVParamAccessoryList *)accessoryList;
-(void)setAccessoryList:(HAP2TLVParamAccessoryList *)arg1 ;
@end

