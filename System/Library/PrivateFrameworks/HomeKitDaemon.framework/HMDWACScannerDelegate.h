/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDWACScannerDelegate
@required
-(void)scanner:(id)arg1 didAddDevice:(id)arg2;
-(void)scanner:(id)arg1 didRemoveDevice:(id)arg2;
-(void)scanner:(id)arg1 didUpdateDevice:(id)arg2;
-(void)scanner:(id)arg1 didError:(id)arg2;
-(void)scannerDidStop:(id)arg1;

@end
