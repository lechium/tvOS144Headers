/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLForegroundMonitorDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, PLForegroundMonitor, PLPhotoAnalysisServiceClient, NSURL, NSString;

@interface PLConstraintsDirector : NSObject <PLForegroundMonitorDelegate> {

	BOOL _didTransitionToOpportunisticDisallowed;
	BOOL _photosAppInForeground;
	BOOL _cameraAppInForeground;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_source> _bonusTimer;
	PLForegroundMonitor* _foregroundMonitor;
	PLPhotoAnalysisServiceClient* _photoAnalysisServiceClient;
	long long _faceQuickClassificationRequestID;
	NSURL* _photoLibraryURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_photoanalysisdIsRunning;
+(BOOL)constraintsAllowSchedulingUserInitiatedAnalysisForAssets;
-(void)informOpportunisticTasksAllowed:(BOOL)arg1 ;
-(void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 forBundleIdentifier:(id)arg3 ;
-(void)_disableAutoFGAndUserFGConstraints;
-(void)_addBonusTime;
-(id)initWithPhotoAnalysisClient:(id)arg1 photoLibraryURL:(id)arg2 ;
-(void)informCameraAppCameraViewControllerVisibilityChanged:(BOOL)arg1 ;
-(void)informCameraAppForegroundState:(BOOL)arg1 ;
-(BOOL)shouldScheduleUserInitiatedAnalysisForAssets;
@end

