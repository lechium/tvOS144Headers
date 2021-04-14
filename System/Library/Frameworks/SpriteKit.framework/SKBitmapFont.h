/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SKBitmapFont : NSObject <NSSecureCoding> {

	NSString* _fontName;
	NSString* _filePath;
	double _lineHeight;
	double _baseLine;
	NSArray* _characterSprites;
	map<unsigned short, SKSpriteNode *, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, SKSpriteNode *> > >* _characterSpriteByChar;
	map<unsigned short, double, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, double> > >* _characterAdvanceByChar;
	map<unsigned int, double, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, double> > >* _characterKerningByCharPair;
	BOOL _internal;
	NSString* _fileName;

}
+(BOOL)supportsSecureCoding;
+(id)fontForFileNamed:(id)arg1 ;
+(id)fontWithTexture:(id)arg1 fontDataString:(id)arg2 ;
+(id)_fontForFileNamed:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)fontName;
-(double)lineHeight;
-(id)spriteForCharacterNamed:(unsigned short)arg1 ;
-(double)kerningForCharacterNamed:(unsigned short)arg1 followedBy:(unsigned short)arg2 ;
-(double)advanceForCharacterNamed:(unsigned short)arg1 ;
-(BOOL)loadFontWithTexture:(id)arg1 fontDataString:(id)arg2 ;
@end
