/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSDictionary, NSString;

@interface IDSWiProxDidSendDataMetric : NSObject <CUTCoreAnalyticsMetric> {

	unsigned long long _resultCode;

}

@property (nonatomic,readonly) unsigned long long resultCode;              //@synthesize resultCode=_resultCode - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)resultCode;
-(id)initWithResultCode:(unsigned long long)arg1 ;
@end

