/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SUCoreRestoreVersion : NSObject <NSSecureCoding> {

	NSString* _restoreVersionString;
	NSArray* _parsedVersion;
	long long _buildGroup;
	long long _majorVersion;
	long long _minorVersion;
	long long _buildVersion;
	long long _syncedVersion;
	long long _suffixVersion;

}

@property (nonatomic,retain) NSString * restoreVersionString;              //@synthesize restoreVersionString=_restoreVersionString - In the implementation block
@property (nonatomic,retain) NSArray * parsedVersion;                      //@synthesize parsedVersion=_parsedVersion - In the implementation block
@property (assign,nonatomic) long long buildGroup;                         //@synthesize buildGroup=_buildGroup - In the implementation block
@property (nonatomic,readonly) long long majorVersion;                     //@synthesize majorVersion=_majorVersion - In the implementation block
@property (nonatomic,readonly) long long minorVersion;                     //@synthesize minorVersion=_minorVersion - In the implementation block
@property (nonatomic,readonly) long long buildVersion;                     //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,readonly) long long syncedVersion;                    //@synthesize syncedVersion=_syncedVersion - In the implementation block
@property (nonatomic,readonly) long long suffixVersion;                    //@synthesize suffixVersion=_suffixVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_stringForNSComparisonResult:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)majorVersion;
-(long long)minorVersion;
-(long long)buildVersion;
-(id)summary;
-(long long)syncedVersion;
-(id)initWithRestoreVersion:(id)arg1 ;
-(BOOL)isComparable:(id)arg1 ;
-(void)_parseRestoreVersionString;
-(NSString *)restoreVersionString;
-(BOOL)_isStringOnlyNumbers:(id)arg1 ;
-(void)setBuildGroup:(long long)arg1 ;
-(void)setParsedVersion:(NSArray *)arg1 ;
-(long long)buildGroup;
-(NSArray *)parsedVersion;
-(void)setRestoreVersionString:(NSString *)arg1 ;
-(long long)suffixVersion;
@end

