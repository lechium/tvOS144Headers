/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TRIUserCovariateProviding.h>

@class TRIServerContext;

@interface TRIUserCovariates : NSObject <TRIUserCovariateProviding> {

	TRIServerContext* _context;

}
-(id)initWithContext:(id)arg1 ;
-(id)tri_shortVersionStringForBundleId:(id)arg1 ;
-(id)_applicationRecordForBundleId:(id)arg1 ;
-(id)tri_versionForBundleId:(id)arg1 ;
-(id)tri_hasApplicationWithBundleId:(id)arg1 ;
-(id)tri_versionStringForBundleId:(id)arg1 ;
-(id)tri_majorVersionForBundleId:(id)arg1 ;
-(id)tri_minorVersionForBundleId:(id)arg1 ;
-(id)tri_patchVersionForBundleId:(id)arg1 ;
-(id)tri_versionForBundleId:(id)arg1 compareToString:(id)arg2 ;
@end

