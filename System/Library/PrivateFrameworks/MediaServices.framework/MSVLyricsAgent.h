/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaServices/MSVLyricsXMLElement.h>

@class NSString;

@interface MSVLyricsAgent : MSVLyricsXMLElement {

	NSString* _type;
	NSString* _name;
	NSString* _artistID;

}

@property (nonatomic,copy) NSString * type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * artistID;              //@synthesize artistID=_artistID - In the implementation block
-(NSString *)name;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setName:(NSString *)arg1 ;
-(void)setArtistID:(NSString *)arg1 ;
-(NSString *)artistID;
@end

