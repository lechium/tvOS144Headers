/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MetricKitSource.framework/MetricKitSource
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricKitSource/MXSourceData.h>

@class MXCrashDiagnostic;

@interface MXReportCrashData : MXSourceData {

	MXCrashDiagnostic* _crashDiagnostic;

}

@property (retain) MXCrashDiagnostic * crashDiagnostic;              //@synthesize crashDiagnostic=_crashDiagnostic - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MXCrashDiagnostic *)crashDiagnostic;
-(id)initPayloadDataWithDiagnostics:(id)arg1 ;
-(void)setCrashDiagnostic:(MXCrashDiagnostic *)arg1 ;
@end

