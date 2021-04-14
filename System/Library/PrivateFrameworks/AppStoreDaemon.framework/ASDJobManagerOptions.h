/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ASDJobManagerOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _shouldFilterExternalOriginatedDownloads;
	BOOL _shouldReportDownloadProgress;
	NSString* _persistenceIdentifier;

}

@property (assign,nonatomic) BOOL shouldReportDownloadProgress;                         //@synthesize shouldReportDownloadProgress=_shouldReportDownloadProgress - In the implementation block
@property (nonatomic,copy) NSString * persistenceIdentifier;                            //@synthesize persistenceIdentifier=_persistenceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldFilterExternalOriginatedDownloads;              //@synthesize shouldFilterExternalOriginatedDownloads=_shouldFilterExternalOriginatedDownloads - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPersistenceIdentifier:(NSString *)arg1 ;
-(BOOL)shouldFilterExternalOriginatedDownloads;
-(NSString *)persistenceIdentifier;
-(void)setShouldFilterExternalOriginatedDownloads:(BOOL)arg1 ;
-(BOOL)shouldReportDownloadProgress;
-(void)setShouldReportDownloadProgress:(BOOL)arg1 ;
@end

