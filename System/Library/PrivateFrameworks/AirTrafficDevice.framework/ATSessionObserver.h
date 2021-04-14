/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ATSessionObserver <NSObject>
@optional
-(void)sessionWillBegin:(id)arg1;
-(void)session:(id)arg1 didFinishSessionTask:(id)arg2;
-(void)session:(id)arg1 didUpdateSessionTask:(id)arg2;
-(void)session:(id)arg1 willBeginSessionTask:(id)arg2;
-(void)session:(id)arg1 didBeginSessionTask:(id)arg2;
-(void)sessionDidFinish:(id)arg1;

@end
