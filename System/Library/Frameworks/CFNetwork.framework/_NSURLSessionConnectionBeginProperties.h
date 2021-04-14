/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class __CFN_ConnectionMetrics;

@interface _NSURLSessionConnectionBeginProperties : NSObject <NSSecureCoding> {

	__CFN_ConnectionMetrics* __metrics;

}

@property (nonatomic,readonly) NSObject*<OS_nw_endpoint> endpoint; 
@property (getter=isTLSConfigured,nonatomic,readonly) BOOL TLSConfigured; 
@property (getter=isProxyConfigured,nonatomic,readonly) BOOL proxyConfigured; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_nw_endpoint>)endpoint;
-(BOOL)isTLSConfigured;
-(BOOL)isProxyConfigured;
@end

