/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class Protocol;

@interface MRWeakProxy : NSObject {

	id _object;
	Protocol* _protocol;

}

@property (assign,nonatomic,__weak) id object;                 //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) Protocol * protocol;              //@synthesize protocol=_protocol - In the implementation block
+(id)weakProxyWithObject:(id)arg1 protocol:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(id)object;
-(Protocol *)protocol;
-(void)setProtocol:(Protocol *)arg1 ;
@end

