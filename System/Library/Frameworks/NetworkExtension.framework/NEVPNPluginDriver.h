/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NEVPNPluginDriver <NEPluginDriver>
@required
-(void)connectWithParameters:(id)arg1;
-(void)disconnectWithReason:(int)arg1;
-(void)attachIPCWithCompletionHandler:(/*^block*/id)arg1;
-(void)setAppUUIDMap:(id)arg1;

@end
