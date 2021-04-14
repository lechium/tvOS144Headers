/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLPhotoLibraryPathManager, NSDate;

@interface PLAssetsdCrashRecoverySupport : NSObject {

	PLPhotoLibraryPathManager* _pathManager;
	os_unfair_lock_s _recoveryIndicatorCheckLock;
	NSDate* _recoveryJobCreationDate;

}
-(id)initWithPathManager:(id)arg1 ;
-(BOOL)isSafeToRecoverAfterCrash;
-(void)recoverFromCrashIfNeededWithImageWriter:(id)arg1 ;
-(void)_enqeueRecoveryJob:(id)arg1 date:(id)arg2 toImageWriter:(id)arg3 ;
@end

