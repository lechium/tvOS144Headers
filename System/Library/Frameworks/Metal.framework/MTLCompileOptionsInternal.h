/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLCompileOptions.h>

@class NSDictionary, NSString, NSArray;

@interface MTLCompileOptionsInternal : MTLCompileOptions {

	BOOL _userSetLanguageVersion;
	NSDictionary* _preprocessorMacros;
	BOOL _fastMathEnabled;
	BOOL _glBufferBindPoints;
	BOOL _tracingEnabled;
	BOOL _debuggingEnabled;
	unsigned long long _languageVersion;
	BOOL _compileTimeStatisticsEnabled;
	NSString* _additionalCompilerArguments;
	unsigned char _sourceLanguage;
	long long _libraryType;
	NSArray* _libraries;
	NSString* _installName;
	BOOL _preserveInvariance;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)installName;
-(id)preprocessorMacros;
-(BOOL)fastMathEnabled;
-(unsigned long long)languageVersion;
-(BOOL)tracingEnabled;
-(BOOL)glBufferBindPoints;
-(BOOL)debuggingEnabled;
-(BOOL)compileTimeStatisticsEnabled;
-(id)additionalCompilerArguments;
-(unsigned char)sourceLanguage;
-(long long)libraryType;
-(id)libraries;
-(BOOL)preserveInvariance;
-(void)setPreprocessorMacros:(id)arg1 ;
-(void)setFastMathEnabled:(BOOL)arg1 ;
-(void)setLanguageVersion:(unsigned long long)arg1 ;
-(void)setTracingEnabled:(BOOL)arg1 ;
-(void)setGlBufferBindPoints:(BOOL)arg1 ;
-(void)setDebuggingEnabled:(BOOL)arg1 ;
-(void)setCompileTimeStatisticsEnabled:(BOOL)arg1 ;
-(void)setAdditionalCompilerArguments:(id)arg1 ;
-(void)setSourceLanguage:(unsigned char)arg1 ;
-(void)setLibraryType:(long long)arg1 ;
-(void)setLibraries:(id)arg1 ;
-(void)setInstallName:(id)arg1 ;
-(void)setPreserveInvariance:(BOOL)arg1 ;
-(id)exportDictionary;
-(void)importDictionary:(id)arg1 ;
@end

