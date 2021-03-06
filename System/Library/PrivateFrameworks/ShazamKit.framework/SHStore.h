/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SHStore : NSObject

@property (nonatomic,readonly) double minimumSignatureLength; 
@property (nonatomic,readonly) double maximumSignatureLength; 
-(id)_init;
-(void)preload;
-(id)deviceModel;
-(id)deviceProductVersion;
-(id)systemInfoByName:(char*)arg1 ;
-(double)minimumSignatureLength;
-(double)maximumSignatureLength;
-(id)frameworkShortVersion;
-(id)deviceOSVersion;
-(id)deviceSystemName;
-(id)createMatcher;
@end

