/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2EncodedRequest.h>

@class NSString;

@interface HAP2EncodedEmptyRequestThread : HAP2LoggingObject <HAP2EncodedRequest> {

	unsigned long long _requestType;

}

@property (nonatomic,readonly) unsigned long long requestType;                 //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)type;
-(id)body;
-(unsigned long long)requestType;
-(BOOL)isEncrypted;
-(id)serialize;
-(id)initWithRequestType:(unsigned long long)arg1 ;
@end

