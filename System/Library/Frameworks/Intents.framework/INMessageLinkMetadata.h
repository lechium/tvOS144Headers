/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDateComponents;

@interface INMessageLinkMetadata : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _siteName;
	NSString* _summary;
	NSString* _title;
	NSString* _itemType;
	NSString* _originalURL;
	NSArray* _imageURLs;
	NSArray* _iconURLs;
	NSString* _creator;
	long long _linkMediaType;
	NSString* _iTunesStoreIdentifier;
	NSString* _iTunesStoreFrontIdentifier;
	NSString* _songTitle;
	NSString* _songArtist;
	NSString* _songAlbum;
	NSString* _albumName;
	NSString* _albumArtist;
	NSString* _musicVideoName;
	NSString* _musicVideoArtist;
	NSString* _artistName;
	NSString* _artistGenre;
	NSString* _playlistName;
	NSString* _playlistCurator;
	NSString* _radioName;
	NSString* _radioCurator;
	NSString* _softwareName;
	NSString* _softwareGenre;
	NSString* _softwarePlatform;
	NSString* _bookName;
	NSString* _bookAuthor;
	NSString* _audioBookName;
	NSString* _audioBookAuthor;
	NSString* _audioBookNarrator;
	NSString* _podcastName;
	NSString* _podcastArtist;
	NSString* _podcastEpisodeName;
	NSString* _podcastEpisodePodcastName;
	NSString* _podcastEpisodeArtist;
	NSDateComponents* _podcastEpisodeReleaseDate;
	NSString* _tvEpisodeEpisodeName;
	NSString* _tvEpisodeSeasonName;
	NSString* _tvEpisodeGenre;
	NSString* _tvSeasonName;
	NSString* _tvSeasonGenre;
	NSString* _movieName;
	NSString* _movieGenre;
	NSString* _tvShowName;
	NSString* _movieBundleName;
	NSString* _movieBundleGenre;
	NSString* _appleTvTitle;
	NSString* _appleTvSubtitle;

}

@property (nonatomic,copy) NSString * siteName;                                       //@synthesize siteName=_siteName - In the implementation block
@property (nonatomic,copy) NSString * summary;                                        //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * itemType;                                       //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,copy) NSString * originalURL;                                    //@synthesize originalURL=_originalURL - In the implementation block
@property (nonatomic,copy) NSArray * imageURLs;                                       //@synthesize imageURLs=_imageURLs - In the implementation block
@property (nonatomic,copy) NSArray * iconURLs;                                        //@synthesize iconURLs=_iconURLs - In the implementation block
@property (nonatomic,copy) NSString * creator;                                        //@synthesize creator=_creator - In the implementation block
@property (assign,nonatomic) long long linkMediaType;                                 //@synthesize linkMediaType=_linkMediaType - In the implementation block
@property (nonatomic,copy) NSString * iTunesStoreIdentifier;                          //@synthesize iTunesStoreIdentifier=_iTunesStoreIdentifier - In the implementation block
@property (nonatomic,copy) NSString * iTunesStoreFrontIdentifier;                     //@synthesize iTunesStoreFrontIdentifier=_iTunesStoreFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * songTitle;                                      //@synthesize songTitle=_songTitle - In the implementation block
@property (nonatomic,copy) NSString * songArtist;                                     //@synthesize songArtist=_songArtist - In the implementation block
@property (nonatomic,copy) NSString * songAlbum;                                      //@synthesize songAlbum=_songAlbum - In the implementation block
@property (nonatomic,copy) NSString * albumName;                                      //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,copy) NSString * albumArtist;                                    //@synthesize albumArtist=_albumArtist - In the implementation block
@property (nonatomic,copy) NSString * musicVideoName;                                 //@synthesize musicVideoName=_musicVideoName - In the implementation block
@property (nonatomic,copy) NSString * musicVideoArtist;                               //@synthesize musicVideoArtist=_musicVideoArtist - In the implementation block
@property (nonatomic,copy) NSString * artistName;                                     //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSString * artistGenre;                                    //@synthesize artistGenre=_artistGenre - In the implementation block
@property (nonatomic,copy) NSString * playlistName;                                   //@synthesize playlistName=_playlistName - In the implementation block
@property (nonatomic,copy) NSString * playlistCurator;                                //@synthesize playlistCurator=_playlistCurator - In the implementation block
@property (nonatomic,copy) NSString * radioName;                                      //@synthesize radioName=_radioName - In the implementation block
@property (nonatomic,copy) NSString * radioCurator;                                   //@synthesize radioCurator=_radioCurator - In the implementation block
@property (nonatomic,copy) NSString * softwareName;                                   //@synthesize softwareName=_softwareName - In the implementation block
@property (nonatomic,copy) NSString * softwareGenre;                                  //@synthesize softwareGenre=_softwareGenre - In the implementation block
@property (nonatomic,copy) NSString * softwarePlatform;                               //@synthesize softwarePlatform=_softwarePlatform - In the implementation block
@property (nonatomic,copy) NSString * bookName;                                       //@synthesize bookName=_bookName - In the implementation block
@property (nonatomic,copy) NSString * bookAuthor;                                     //@synthesize bookAuthor=_bookAuthor - In the implementation block
@property (nonatomic,copy) NSString * audioBookName;                                  //@synthesize audioBookName=_audioBookName - In the implementation block
@property (nonatomic,copy) NSString * audioBookAuthor;                                //@synthesize audioBookAuthor=_audioBookAuthor - In the implementation block
@property (nonatomic,copy) NSString * audioBookNarrator;                              //@synthesize audioBookNarrator=_audioBookNarrator - In the implementation block
@property (nonatomic,copy) NSString * podcastName;                                    //@synthesize podcastName=_podcastName - In the implementation block
@property (nonatomic,copy) NSString * podcastArtist;                                  //@synthesize podcastArtist=_podcastArtist - In the implementation block
@property (nonatomic,copy) NSString * podcastEpisodeName;                             //@synthesize podcastEpisodeName=_podcastEpisodeName - In the implementation block
@property (nonatomic,copy) NSString * podcastEpisodePodcastName;                      //@synthesize podcastEpisodePodcastName=_podcastEpisodePodcastName - In the implementation block
@property (nonatomic,copy) NSString * podcastEpisodeArtist;                           //@synthesize podcastEpisodeArtist=_podcastEpisodeArtist - In the implementation block
@property (nonatomic,copy) NSDateComponents * podcastEpisodeReleaseDate;              //@synthesize podcastEpisodeReleaseDate=_podcastEpisodeReleaseDate - In the implementation block
@property (nonatomic,copy) NSString * tvEpisodeEpisodeName;                           //@synthesize tvEpisodeEpisodeName=_tvEpisodeEpisodeName - In the implementation block
@property (nonatomic,copy) NSString * tvEpisodeSeasonName;                            //@synthesize tvEpisodeSeasonName=_tvEpisodeSeasonName - In the implementation block
@property (nonatomic,copy) NSString * tvEpisodeGenre;                                 //@synthesize tvEpisodeGenre=_tvEpisodeGenre - In the implementation block
@property (nonatomic,copy) NSString * tvSeasonName;                                   //@synthesize tvSeasonName=_tvSeasonName - In the implementation block
@property (nonatomic,copy) NSString * tvSeasonGenre;                                  //@synthesize tvSeasonGenre=_tvSeasonGenre - In the implementation block
@property (nonatomic,copy) NSString * movieName;                                      //@synthesize movieName=_movieName - In the implementation block
@property (nonatomic,copy) NSString * movieGenre;                                     //@synthesize movieGenre=_movieGenre - In the implementation block
@property (nonatomic,copy) NSString * tvShowName;                                     //@synthesize tvShowName=_tvShowName - In the implementation block
@property (nonatomic,copy) NSString * movieBundleName;                                //@synthesize movieBundleName=_movieBundleName - In the implementation block
@property (nonatomic,copy) NSString * movieBundleGenre;                               //@synthesize movieBundleGenre=_movieBundleGenre - In the implementation block
@property (nonatomic,copy) NSString * appleTvTitle;                                   //@synthesize appleTvTitle=_appleTvTitle - In the implementation block
@property (nonatomic,copy) NSString * appleTvSubtitle;                                //@synthesize appleTvSubtitle=_appleTvSubtitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setItemType:(NSString *)arg1 ;
-(NSString *)itemType;
-(id)_dictionaryRepresentation;
-(NSString *)summary;
-(void)setCreator:(NSString *)arg1 ;
-(NSString *)creator;
-(void)setSummary:(NSString *)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(NSString *)albumArtist;
-(void)setAlbumArtist:(NSString *)arg1 ;
-(NSString *)appleTvSubtitle;
-(void)setAppleTvSubtitle:(NSString *)arg1 ;
-(NSString *)appleTvTitle;
-(void)setAppleTvTitle:(NSString *)arg1 ;
-(NSString *)artistGenre;
-(void)setArtistGenre:(NSString *)arg1 ;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(NSString *)audioBookAuthor;
-(void)setAudioBookAuthor:(NSString *)arg1 ;
-(NSString *)audioBookName;
-(void)setAudioBookName:(NSString *)arg1 ;
-(NSString *)audioBookNarrator;
-(void)setAudioBookNarrator:(NSString *)arg1 ;
-(NSString *)bookAuthor;
-(void)setBookAuthor:(NSString *)arg1 ;
-(NSString *)bookName;
-(void)setBookName:(NSString *)arg1 ;
-(NSString *)iTunesStoreFrontIdentifier;
-(void)setITunesStoreFrontIdentifier:(NSString *)arg1 ;
-(NSString *)iTunesStoreIdentifier;
-(void)setITunesStoreIdentifier:(NSString *)arg1 ;
-(NSArray *)iconURLs;
-(void)setIconURLs:(NSArray *)arg1 ;
-(NSArray *)imageURLs;
-(void)setImageURLs:(NSArray *)arg1 ;
-(long long)linkMediaType;
-(void)setLinkMediaType:(long long)arg1 ;
-(NSString *)movieBundleGenre;
-(void)setMovieBundleGenre:(NSString *)arg1 ;
-(NSString *)movieBundleName;
-(void)setMovieBundleName:(NSString *)arg1 ;
-(NSString *)movieGenre;
-(void)setMovieGenre:(NSString *)arg1 ;
-(NSString *)movieName;
-(void)setMovieName:(NSString *)arg1 ;
-(NSString *)musicVideoArtist;
-(void)setMusicVideoArtist:(NSString *)arg1 ;
-(NSString *)musicVideoName;
-(void)setMusicVideoName:(NSString *)arg1 ;
-(NSString *)originalURL;
-(void)setOriginalURL:(NSString *)arg1 ;
-(NSString *)playlistCurator;
-(void)setPlaylistCurator:(NSString *)arg1 ;
-(NSString *)playlistName;
-(void)setPlaylistName:(NSString *)arg1 ;
-(NSString *)podcastArtist;
-(void)setPodcastArtist:(NSString *)arg1 ;
-(NSString *)podcastEpisodeArtist;
-(void)setPodcastEpisodeArtist:(NSString *)arg1 ;
-(NSString *)podcastEpisodeName;
-(void)setPodcastEpisodeName:(NSString *)arg1 ;
-(NSString *)podcastEpisodePodcastName;
-(void)setPodcastEpisodePodcastName:(NSString *)arg1 ;
-(NSDateComponents *)podcastEpisodeReleaseDate;
-(void)setPodcastEpisodeReleaseDate:(NSDateComponents *)arg1 ;
-(NSString *)podcastName;
-(void)setPodcastName:(NSString *)arg1 ;
-(NSString *)radioCurator;
-(void)setRadioCurator:(NSString *)arg1 ;
-(NSString *)radioName;
-(void)setRadioName:(NSString *)arg1 ;
-(NSString *)siteName;
-(void)setSiteName:(NSString *)arg1 ;
-(NSString *)softwareGenre;
-(void)setSoftwareGenre:(NSString *)arg1 ;
-(NSString *)softwareName;
-(void)setSoftwareName:(NSString *)arg1 ;
-(NSString *)softwarePlatform;
-(void)setSoftwarePlatform:(NSString *)arg1 ;
-(NSString *)songAlbum;
-(void)setSongAlbum:(NSString *)arg1 ;
-(NSString *)songArtist;
-(void)setSongArtist:(NSString *)arg1 ;
-(NSString *)songTitle;
-(void)setSongTitle:(NSString *)arg1 ;
-(NSString *)tvEpisodeEpisodeName;
-(void)setTvEpisodeEpisodeName:(NSString *)arg1 ;
-(NSString *)tvEpisodeGenre;
-(void)setTvEpisodeGenre:(NSString *)arg1 ;
-(NSString *)tvEpisodeSeasonName;
-(void)setTvEpisodeSeasonName:(NSString *)arg1 ;
-(NSString *)tvSeasonGenre;
-(void)setTvSeasonGenre:(NSString *)arg1 ;
-(NSString *)tvSeasonName;
-(void)setTvSeasonName:(NSString *)arg1 ;
-(NSString *)tvShowName;
-(void)setTvShowName:(NSString *)arg1 ;
-(id)initWithSiteName:(id)arg1 summary:(id)arg2 title:(id)arg3 itemType:(id)arg4 originalURL:(id)arg5 imageURLs:(id)arg6 iconURLs:(id)arg7 creator:(id)arg8 linkMediaType:(long long)arg9 iTunesStoreIdentifier:(id)arg10 iTunesStoreFrontIdentifier:(id)arg11 songTitle:(id)arg12 songArtist:(id)arg13 songAlbum:(id)arg14 albumName:(id)arg15 albumArtist:(id)arg16 musicVideoName:(id)arg17 musicVideoArtist:(id)arg18 artistName:(id)arg19 artistGenre:(id)arg20 playlistName:(id)arg21 playlistCurator:(id)arg22 radioName:(id)arg23 radioCurator:(id)arg24 softwareName:(id)arg25 softwareGenre:(id)arg26 softwarePlatform:(id)arg27 bookName:(id)arg28 bookAuthor:(id)arg29 audioBookName:(id)arg30 audioBookAuthor:(id)arg31 audioBookNarrator:(id)arg32 podcastName:(id)arg33 podcastArtist:(id)arg34 podcastEpisodeName:(id)arg35 podcastEpisodePodcastName:(id)arg36 podcastEpisodeArtist:(id)arg37 podcastEpisodeReleaseDate:(id)arg38 tvEpisodeEpisodeName:(id)arg39 tvEpisodeSeasonName:(id)arg40 tvEpisodeGenre:(id)arg41 tvSeasonName:(id)arg42 tvSeasonGenre:(id)arg43 movieName:(id)arg44 movieGenre:(id)arg45 tvShowName:(id)arg46 movieBundleName:(id)arg47 movieBundleGenre:(id)arg48 appleTvTitle:(id)arg49 appleTvSubtitle:(id)arg50 ;
-(id)initWithSiteName:(id)arg1 summary:(id)arg2 title:(id)arg3 itemType:(id)arg4 originalURL:(id)arg5 imageURLs:(id)arg6 iconURLs:(id)arg7 creator:(id)arg8 linkMediaType:(long long)arg9 iTunesStoreIdentifier:(id)arg10 iTunesStoreFrontIdentifier:(id)arg11 songTitle:(id)arg12 songArtist:(id)arg13 songAlbum:(id)arg14 albumName:(id)arg15 albumArtist:(id)arg16 musicVideoName:(id)arg17 musicVideoArtist:(id)arg18 artistName:(id)arg19 artistGenre:(id)arg20 playlistName:(id)arg21 playlistCurator:(id)arg22 radioName:(id)arg23 radioCurator:(id)arg24 softwareName:(id)arg25 softwareGenre:(id)arg26 softwarePlatform:(id)arg27 bookName:(id)arg28 bookAuthor:(id)arg29 audioBookName:(id)arg30 audioBookAuthor:(id)arg31 audioBookNarrator:(id)arg32 podcastName:(id)arg33 podcastArtist:(id)arg34 podcastEpisodeName:(id)arg35 podcastEpisodePodcastName:(id)arg36 podcastEpisodeArtist:(id)arg37 podcastEpisodeReleaseDate:(id)arg38 tvEpisodeEpisodeName:(id)arg39 tvEpisodeSeasonName:(id)arg40 tvEpisodeGenre:(id)arg41 tvSeasonName:(id)arg42 tvSeasonGenre:(id)arg43 movieName:(id)arg44 movieGenre:(id)arg45 ;
@end

