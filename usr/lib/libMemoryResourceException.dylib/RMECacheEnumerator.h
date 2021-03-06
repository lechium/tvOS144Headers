/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libMemoryResourceException.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDirectoryEnumerator, NSString;

@interface RMECacheEnumerator : NSObject {

	NSDirectoryEnumerator* _internalEnumerator;
	NSString* _volume;

}

@property (nonatomic,copy) NSDirectoryEnumerator * internalEnumerator;              //@synthesize internalEnumerator=_internalEnumerator - In the implementation block
@property (nonatomic,retain) NSString * volume;                                     //@synthesize volume=_volume - In the implementation block
+(id)getLogContainer:(BOOL)arg1 ;
+(id)getLogPathsSortedByTime;
+(id)getLogPathsForSystemDiagnostic;
+(id)getEPLProfilePath;
-(NSString *)volume;
-(void)setVolume:(NSString *)arg1 ;
-(id)initCacheEnumeratorWithVolume:(id)arg1 ;
-(id)initCacheEnumerator;
-(id)nextValidURL;
-(NSDirectoryEnumerator *)internalEnumerator;
-(void)setInternalEnumerator:(NSDirectoryEnumerator *)arg1 ;
@end

