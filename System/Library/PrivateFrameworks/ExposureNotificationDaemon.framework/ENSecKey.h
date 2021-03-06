/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
@interface ENSecKey : NSObject {

	SecKeyRef _keyRef;

}

@property (nonatomic,readonly) SecKeyRef keyRef;              //@synthesize keyRef=_keyRef - In the implementation block
+(id)keyFromBase64String:(id)arg1 keyClass:(const CFStringRef)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(SecKeyRef)keyRef;
-(id)initWithKeyRef:(SecKeyRef)arg1 ;
@end

