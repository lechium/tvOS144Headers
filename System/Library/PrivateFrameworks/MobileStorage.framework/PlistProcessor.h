/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MobileStorage.framework/MobileStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PlistProcessor : NSObject
+(id)sharedPlistProcessor;
-(id)copyAndFixPlist:(id)arg1 forMountPoint:(id)arg2 ;
-(void)scanPlistsAtPath:(id)arg1 execBlock:(/*^block*/id)arg2 ;
-(BOOL)verifyPlist:(id)arg1 forMountPoint:(id)arg2 ;
@end

