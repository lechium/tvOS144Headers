/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFScanManagerDelegate <NSObject>
@optional
-(id)scanManager:(id)arg1 filterScanResults:(id)arg2;
-(void)scanManagerScanningWillStart:(id)arg1;
-(void)scanManager:(id)arg1 stateDidChange:(long long)arg2;
-(void)scanManager:(id)arg1 didFindHotspotHelperNetworks:(id)arg2;
-(BOOL)scanManagerShouldSupportHotspotHelper:(id)arg1;
-(BOOL)scanManagerShouldSupportUnfilteredScanning:(id)arg1;
-(id)scanManagerKnownNetworks:(id)arg1;

@required
-(void)scanManager:(id)arg1 updatedPartialResults:(id)arg2;
-(void)scanManagerScanningDidFinish:(id)arg1 withResults:(id)arg2 error:(id)arg3;

@end

