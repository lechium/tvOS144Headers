/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSURLSessionStreamDelegate <NSURLSessionTaskDelegate>
@optional
-(void)URLSession:(id)arg1 readClosedForStreamTask:(id)arg2;
-(void)URLSession:(id)arg1 writeClosedForStreamTask:(id)arg2;
-(void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2;
-(void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;

@end
