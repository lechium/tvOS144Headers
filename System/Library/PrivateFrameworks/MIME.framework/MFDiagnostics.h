/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>

@class MFWeakSet, NSLock, NSString;

@interface MFDiagnostics : NSObject <MFDiagnosticsGenerator> {

	MFWeakSet* _diagnosticsGenerators;
	NSLock* _diagnosticLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(id)init;
-(void)dealloc;
-(id)copyDiagnosticInformation;
-(void)addDiagnosticsGenerator:(id)arg1 ;
-(void)removeDiagnosticsGenerator:(id)arg1 ;
@end

