/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CKDPackageManifest : NSObject
+(BOOL)readContentsOfFile:(id)arg1 intoPackage:(id)arg2 error:(id*)arg3 ;
+(BOOL)writePackage:(id)arg1 toFile:(id)arg2 error:(id*)arg3 ;
+(id)packageInClientWithBasePath:(id)arg1 contentsOfFile:(id)arg2 error:(id*)arg3 ;
@end
