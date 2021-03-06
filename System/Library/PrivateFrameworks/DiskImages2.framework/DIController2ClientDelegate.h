/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DIController2ClientProtocol.h>

@class DIDeviceHandle;

@interface DIController2ClientDelegate : NSObject <DIController2ClientProtocol> {

	DIDeviceHandle* _deviceHandle;

}

@property (nonatomic,retain) DIDeviceHandle * deviceHandle;              //@synthesize deviceHandle=_deviceHandle - In the implementation block
-(DIDeviceHandle *)deviceHandle;
-(void)setDeviceHandle:(DIDeviceHandle *)arg1 ;
-(void)attachCompletedWithHandle:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

