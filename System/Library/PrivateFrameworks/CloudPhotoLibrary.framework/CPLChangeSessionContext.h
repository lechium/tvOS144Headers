/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPLResetTracker;

@interface CPLChangeSessionContext : NSObject <NSSecureCoding> {

	unsigned long long _estimatedInitialSizeForLocalLibrary;
	unsigned long long _estimatedInitialAssetCountForLocalLibrary;
	CPLResetTracker* _resetTracker;

}

@property (assign,nonatomic) unsigned long long estimatedInitialSizeForLocalLibrary;                    //@synthesize estimatedInitialSizeForLocalLibrary=_estimatedInitialSizeForLocalLibrary - In the implementation block
@property (assign,nonatomic) unsigned long long estimatedInitialAssetCountForLocalLibrary;              //@synthesize estimatedInitialAssetCountForLocalLibrary=_estimatedInitialAssetCountForLocalLibrary - In the implementation block
@property (nonatomic,retain) CPLResetTracker * resetTracker;                                            //@synthesize resetTracker=_resetTracker - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)estimatedInitialSizeForLocalLibrary;
-(void)setEstimatedInitialSizeForLocalLibrary:(unsigned long long)arg1 ;
-(unsigned long long)estimatedInitialAssetCountForLocalLibrary;
-(void)setEstimatedInitialAssetCountForLocalLibrary:(unsigned long long)arg1 ;
-(CPLResetTracker *)resetTracker;
-(void)setResetTracker:(CPLResetTracker *)arg1 ;
@end

