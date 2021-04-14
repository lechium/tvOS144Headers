/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/VNDetectorProviding.h>
#import <libobjc.A.dylib/VNDetectorReleasing.h>

@class NSMutableSet, NSString;

@interface VNDetectorCache : NSObject <VNDetectorProviding, VNDetectorReleasing> {

	os_unfair_lock_s _detectorsLock;
	NSMutableSet* _detectors;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)loadedDetectors;
-(void)releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2 ;
-(id)detectorOfType:(id)arg1 configuredWithOptions:(id)arg2 error:(id*)arg3 ;
-(id)detectorOfClass:(Class)arg1 configuredWithOptions:(id)arg2 error:(id*)arg3 ;
-(void)cacheDetector:(id)arg1 ;
-(void)evictDetectorsPassingTest:(/*^block*/id)arg1 ;
-(void)evictAllDetectors;
@end

