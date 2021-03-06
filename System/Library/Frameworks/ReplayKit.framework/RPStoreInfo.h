/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL;

@interface RPStoreInfo : NSObject {

	NSString* _bundleID;
	NSString* _appName;
	NSString* _author;
	NSURL* _itemURL;
	NSURL* _appArtworkURL;

}

@property (nonatomic,retain) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * appName;                 //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) NSString * author;                  //@synthesize author=_author - In the implementation block
@property (nonatomic,retain) NSURL * itemURL;                    //@synthesize itemURL=_itemURL - In the implementation block
@property (nonatomic,retain) NSURL * appArtworkURL;              //@synthesize appArtworkURL=_appArtworkURL - In the implementation block
-(id)dictionary;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(NSURL *)itemURL;
-(void)setItemURL:(NSURL *)arg1 ;
-(NSURL *)appArtworkURL;
-(void)setAppArtworkURL:(NSURL *)arg1 ;
@end

