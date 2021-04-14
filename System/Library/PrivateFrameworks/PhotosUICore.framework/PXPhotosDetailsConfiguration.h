/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXPhotosDetailsConfiguration : NSObject <NSCopying> {

	unsigned long long _options;
	Class _barsControllerClass;
	/*^block*/id _unlockDeviceHandler;
	/*^block*/id _unlockDeviceStatus;

}

@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) Class barsControllerClass;               //@synthesize barsControllerClass=_barsControllerClass - In the implementation block
@property (nonatomic,copy) id unlockDeviceHandler;                    //@synthesize unlockDeviceHandler=_unlockDeviceHandler - In the implementation block
@property (nonatomic,copy) id unlockDeviceStatus;                     //@synthesize unlockDeviceStatus=_unlockDeviceStatus - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(Class)barsControllerClass;
-(void)setBarsControllerClass:(Class)arg1 ;
-(id)unlockDeviceHandler;
-(void)setUnlockDeviceHandler:(id)arg1 ;
-(id)unlockDeviceStatus;
-(void)setUnlockDeviceStatus:(id)arg1 ;
@end

